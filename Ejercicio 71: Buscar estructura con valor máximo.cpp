#include <iostream>
using namespace std;

struct Producto {
    char nombre[50];
    float precio;
};

int main() {
    int n;
    cout << "Cantidad de productos: ";
    cin >> n;
    cin.ignore();

    Producto* lista = new Producto[n];
    for (int i = 0; i < n; i++) {
        cout << "Nombre: ";
        cin.getline(lista[i].nombre, 50);
        cout << "Precio: ";
        cin >> lista[i].precio;
        cin.ignore();
    }

    Producto* max = &lista[0];
    for (int i = 1; i < n; i++)
        if (lista[i].precio > max->precio) max = &lista[i];

    cout << "Producto más caro: " << max->nombre << " ($" << max->precio << ")\n";
    delete[] lista;
    return 0;
}
