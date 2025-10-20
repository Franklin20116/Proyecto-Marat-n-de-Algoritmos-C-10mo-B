#include <iostream>
#include <cstring>
using namespace std;

struct Alumno {
    char nombre[50];
    float nota;
};

int main() {
    int n;
    cout << "Cantidad de alumnos: ";
    cin >> n;
    cin.ignore();
    Alumno* grupo = new Alumno[n];
    float suma = 0;
    for (int i = 0; i < n; i++) {
        cout << "Nombre del alumno " << i + 1 << ": ";
        cin.getline(grupo[i].nombre, 50);
        cout << "Nota: ";
        cin >> grupo[i].nota;
        cin.ignore();
        suma += grupo[i].nota;
    }
    cout << "Promedio del grupo: " << suma / n << endl;
    delete[] grupo;
    return 0;
}
