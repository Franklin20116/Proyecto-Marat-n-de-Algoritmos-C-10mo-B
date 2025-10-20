#include <iostream>
using namespace std;

int contarPalabras(const char* cadena) {
    int palabras = 0;
    bool enPalabra = false;
    while (*cadena) {
        if (*cadena != ' ' && !enPalabra) {
            enPalabra = true;
            palabras++;
        } else if (*cadena == ' ') {
            enPalabra = false;
        }
        cadena++;
    }
    return palabras;
}

int main() {
    char* texto = new char[100];
    cout << "Ingrese una frase: ";
    cin.getline(texto, 100);
    cout << "Palabras: " << contarPalabras(texto) << endl;
    delete[] texto;
    return 0;
}
