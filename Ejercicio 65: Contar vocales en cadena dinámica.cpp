#include <iostream>
using namespace std;

int contarVocales(const char* cadena) {
    int contador = 0;
    while (*cadena) {
        char c = tolower(*cadena);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            contador++;
        cadena++;
    }
    return contador;
}

int main() {
    char* texto = new char[100];
    cout << "Ingrese una cadena: ";
    cin.getline(texto, 100);
    cout << "Vocales: " << contarVocales(texto) << endl;
    delete[] texto;
    return 0;
}
