#include <iostream>
#include <cstring>
using namespace std;

int contarPalabra(char* texto, const char* palabra) {
    int contador = 0;
    char* token = strtok(texto, " ");
    while (token) {
        if (strcmp(token, palabra) == 0) contador++;
        token = strtok(nullptr, " ");
    }
    return contador;
}

int main() {
    char frase[200], palabra[50];
    cout << "Ingrese una frase: ";
    cin.getline(frase, 200);
    cout << "Palabra a buscar: ";
    cin.getline(palabra, 50);
    cout << "Ocurrencias: " << contarPalabra(frase, palabra) << endl;
    return 0;
}
