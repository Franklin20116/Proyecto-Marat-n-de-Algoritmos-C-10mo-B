#include <iostream>
using namespace std;

int contarPalabras(char* cad) {
    int contador = 0;
    bool enPalabra = false;
    while (*cad) {
        if (*cad != ' ' && !enPalabra) {
            enPalabra = true;
            contador++;
        } else if (*cad == ' ') {
            enPalabra = false;
        }
        cad++;
    }
    return contador;
}

int main() {
    char frase[200];
    cout << "Ingrese una frase: ";
    cin.getline(frase, 200);
    cout << "Cantidad de palabras: " << contarPalabras(frase) << endl;
    return 0;
}
