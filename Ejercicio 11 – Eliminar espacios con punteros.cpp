#include <iostream>
using namespace std;

void eliminarEspacios(char* cad, char* resultado) {
    while (*cad) {
        if (*cad != ' ') {
            *resultado = *cad;
            resultado++;
        }
        cad++;
    }
    *resultado = '\0';
}

int main() {
    char frase[200], sinEspacios[200];
    cout << "Ingrese una frase: ";
    cin.getline(frase, 200);
    eliminarEspacios(frase, sinEspacios);
    cout << "Frase sin espacios: " << sinEspacios << endl;
    return 0;
}
