#include <iostream>
using namespace std;

struct Contacto {
    char nombre[50];
    char telefono[20];
};

int main() {
    int n;
    cout << "Cantidad de contactos: ";
    cin >> n;
    cin.ignore();

    Contacto* agenda = new Contacto[n];
    for (int i = 0; i < n; i++) {
        cout << "Nombre: ";
        cin.getline(agenda[i].nombre, 50);
        cout << "Teléfono: ";
        cin.getline(agenda[i].telefono, 20);
    }

    cout << "\nAgenda completa:\n";
    for (int i = 0; i < n; i++)
        cout << agenda[i].nombre << " - " << agenda[i].telefono << endl;

    delete[] agenda;
    return 0;
}
