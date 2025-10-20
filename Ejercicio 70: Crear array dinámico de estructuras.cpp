#include <iostream>
using namespace std;

struct Estudiante {
    char nombre[50];
    int edad;
};

int main() {
    int n;
    cout << "Número de estudiantes: ";
    cin >> n;
    cin.ignore();

    Estudiante* grupo = new Estudiante[n];
    for (int i = 0; i < n; i++) {
        cout << "Nombre: ";
        cin.getline(grupo[i].nombre, 50);
        cout << "Edad: ";
        cin >> grupo[i].edad;
        cin.ignore();
    }

    cout << "\nListado:\n";
    for (int i = 0; i < n; i++)
        cout << grupo[i].nombre << " - " << grupo[i].edad << " años\n";

    delete[] grupo;
    return 0;
}
