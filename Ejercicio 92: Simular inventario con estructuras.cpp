#include <iostream>
using namespace std;

struct Producto {
    char nombre[50];
    int cantidad;
    float precio;
};

int main() {
    int n;
    cout << "Número de productos: ";
    cin >> n;
    cin.ignore();

    Producto* inventario = new Producto[n];
    float total = 0;

    for (int i = 0; i < n; i++) {
        cout << "Nombre: ";
        cin.getline(inventario[i].nombre, 50);
        cout << "Cantidad: ";
        cin >> inventario[i].cantidad;
        cout << "Precio unitario: ";
        cin >> inventario[i].precio;
        cin.ignore();
        total += inventario[i].cantidad * inventario[i].precio;
    }

    cout << "\nTotal del inventario: $" << total << endl;
    delete[] inventario;
    return 0;
}
