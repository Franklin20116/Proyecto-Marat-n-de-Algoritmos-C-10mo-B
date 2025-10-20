#include <iostream>
using namespace std;

struct Empleado {
    char nombre[50];
    int edad;
};

int main() {
    int n;
    cout << "Número de empleados: ";
    cin >> n;
    cin.ignore();

    Empleado* lista = new Empleado[n];
    for (int i = 0; i < n; i++) {
        cout << "Nombre: ";
        cin.getline(lista[i].nombre, 50);
        cout << "Edad: ";
        cin >> lista[i].edad;
        cin.ignore();
    }

    cout << "\nMayores de 30:\n";
    for (int i = 0; i < n; i++)
        if (lista[i].edad > 30)
            cout << lista[i].nombre << " (" << lista[i].edad << " años)\n";

    delete[] lista;
    return 0;
}
