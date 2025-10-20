#include <iostream>
using namespace std;

struct Producto {
    char nombre[50];
    float precio;
    int cantidad;
};

int main() {
    int n;
    cout << "Cantidad de productos: ";
    cin >> n;
    cin.ignore();

    Producto* carrito = new Producto[n];
    float total = 0;

    for (int i = 0; i < n; i++) {
        cout << "Producto " << i + 1 << ":\n";
        cout << "Nombre: ";
        cin.getline(carrito[i].nombre, 50);
        cout << "Precio: ";
        cin >> carrito[i].precio;
        cout << "Cantidad: ";
        cin >> carrito[i].cantidad;
        cin.ignore();
        total += carrito[i].precio * carrito[i].cantidad;
    }

    cout << "\nTotal a pagar: $" << total << endl;
    delete[] carrito;
    return 0;
}
