#include <iostream>
#include <cstring>
using namespace std;

struct Usuario {
    char nombre[50];
    int edad;
};

int main() {
    int n;
    cout << "Cantidad de usuarios: ";
    cin >> n;
    cin.ignore();

    Usuario* lista = new Usuario[n];
    for (int i = 0; i < n; i++) {
        cout << "Nombre: ";
        cin.getline(lista[i].nombre, 50);
        cout << "Edad: ";
        cin >> lista[i].edad;
        cin.ignore();
    }

    char buscar[50];
    cout << "Buscar usuario por nombre: ";
    cin.getline(buscar, 50);

    bool encontrado = false;
    for (int i = 0; i < n; i++) {
        if (strcmp(lista[i].nombre, buscar) == 0) {
            cout << "Encontrado: " << lista[i].nombre << " - " << lista[i].edad << " años\n";
            encontrado = true;
            break;
        }
    }

    if (!encontrado) cout << "Usuario no encontrado.\n";
    delete[] lista;
    return 0;
}
