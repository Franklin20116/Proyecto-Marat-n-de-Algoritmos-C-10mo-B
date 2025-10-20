#include <iostream>
using namespace std;

struct Persona {
    char nombre[50];
    int edad;
};

int main() {
    int n;
    cout << "Cantidad de personas: ";
    cin >> n;
    cin.ignore();

    Persona* lista = new Persona[n];
    int suma = 0;
    for (int i = 0; i < n; i++) {
        cout << "Nombre: ";
        cin.getline(lista[i].nombre, 50);
        cout << "Edad: ";
        cin >> lista[i].edad;
        cin.ignore();
        suma += lista[i].edad;
    }

    float promedio = (float)suma / n;
    cout << "Promedio de edad: " << promedio << endl;

    delete[] lista;
    return 0;
}
