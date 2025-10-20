#include <iostream>
#include <cstring>
using namespace std;

struct Alumno {
    char nombre[50];
    int nota;
};

void ordenar(Alumno* arr, int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (strcmp(arr[i].nombre, arr[j].nombre) > 0) {
                Alumno temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

int main() {
    int n;
    cout << "Cantidad de alumnos: ";
    cin >> n;
    cin.ignore();

    Alumno* grupo = new Alumno[n];
    for (int i = 0; i < n; i++) {
        cout << "Nombre: ";
        cin.getline(grupo[i].nombre, 50);
        cout << "Nota: ";
        cin >> grupo[i].nota;
        cin.ignore();
    }

    ordenar(grupo, n);
    cout << "\nOrdenado por nombre:\n";
    for (int i = 0; i < n; i++)
        cout << grupo[i].nombre << " - " << grupo[i].nota << endl;

    delete[] grupo;
    return 0;
}
