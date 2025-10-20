#include <iostream>
#include <cstring>
using namespace std;

int contarRepetidos(char* cad) {
    int contador = 0;
    bool vistos[256] = {false};
    bool repetidos[256] = {false};
    for (char* p = cad; *p; p++) {
        unsigned char c = *p;
        if (vistos[c] && !repetidos[c]) {
            contador++;
            repetidos[c] = true;
        }
        vistos[c] = true;
    }
    return contador;
}

int main() {
    char texto[200];
    cout << "Ingrese una cadena: ";
    cin.getline(texto, 200);
    cout << "Caracteres repetidos: " << contarRepetidos(texto) << endl;
    return 0;
}
