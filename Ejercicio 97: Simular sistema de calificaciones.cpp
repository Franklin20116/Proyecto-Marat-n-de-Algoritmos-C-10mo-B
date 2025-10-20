#include <iostream>
using namespace std;

struct Estudiante {
    char nombre[50];
    float notas[3];
};

int main() {
    int n;
    cout << "Cantidad de estudiantes: ";
    cin >> n;
    cin.ignore();

    Estudiante* grupo = new Estudiante[n];
    for (int i = 0; i < n; i++) {
        cout << "Nombre: ";
        cin.getline(grupo[i].nombre, 50);
        cout << "Ingrese 3 notas: ";
        for (int j = 0; j < 3; j++) cin >> grupo[i].notas[j];
        cin.ignore();
    }

    cout << "\nPromedios:\n";
    for (int i = 0; i < n; i++) {
        float suma = 0;
        for (int j = 0; j < 3; j++) suma += grupo[i].notas[j];
        cout << grupo[i].nombre << ": " << suma / 3 << endl;
    }

    delete[] grupo;
    return 0;
}
