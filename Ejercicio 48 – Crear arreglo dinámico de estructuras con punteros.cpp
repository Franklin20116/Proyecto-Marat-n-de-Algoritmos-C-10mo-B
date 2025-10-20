#include <iostream>
#include <cstring>
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
        cout << "Nombre del producto " << i + 1 << ": ";
        cin.getline(lista[i].nombre, 50);
        cout << "Precio: ";
        cin >> lista[i].precio;
        cin.ignore();
    }

    cout << "\nLista de productos:\n";
    for (int i = 0; i < n; i++) {
        cout << lista[i].nombre << " - $" << lista[i].precio << endl;
    }

    delete[] lista;
    return 0;
}
