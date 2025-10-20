#include <iostream>
using namespace std;

struct Persona {
    char nombre[50];
};

int contarVocales(const char* cad) {
    int c = 0;
    while (*cad) {
        char ch = tolower(*cad);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') c++;
        cad++;
    }
    return c;
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
    }

    for (int i = 0; i < n; i++)
        cout << lista[i].nombre << ": " << contarVocales(lista[i].nombre) << " vocales\n";

    delete[] lista;
    return 0;
}
