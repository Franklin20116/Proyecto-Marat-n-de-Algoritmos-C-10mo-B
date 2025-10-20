#include <iostream>
using namespace std;

struct Persona {
    char nombre[50];
    int edad;
};

void ordenar(Persona* arr, int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i].edad > arr[j].edad) {
                Persona temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

int main() {
    int n;
    cout << "Cantidad de personas: ";
    cin >> n;
    cin.ignore();

    Persona* lista = new Persona[n];
    for (int i = 0; i < n; i++) {
        cout << "Nombre: ";
        cin.getline(lista[i].nombre, 50);
        cout << "Edad: ";
        cin >> lista[i].edad;
        cin.ignore();
    }

    ordenar(lista, n);
    cout << "\nOrdenado por edad:\n";
    for (int i = 0; i < n; i++)
        cout << lista[i].nombre << " - " << lista[i].edad << " años\n";

    delete[] lista;
    return 0;
}
