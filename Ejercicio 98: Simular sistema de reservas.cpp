#include <iostream>
using namespace std;

struct Reserva {
    char nombre[50];
    int personas;
};

int main() {
    int n;
    cout << "Cantidad de reservas: ";
    cin >> n;
    cin.ignore();

    Reserva* lista = new Reserva[n];
    int total = 0;

    for (int i = 0; i < n; i++) {
        cout << "Nombre de reserva: ";
        cin.getline(lista[i].nombre, 50);
        cout << "Número de personas: ";
        cin >> lista[i].personas;
        cin.ignore();
        total += lista[i].personas;
    }

    cout << "\nTotal de personas reservadas: " << total << endl;
    delete[] lista;
    return 0;
}
