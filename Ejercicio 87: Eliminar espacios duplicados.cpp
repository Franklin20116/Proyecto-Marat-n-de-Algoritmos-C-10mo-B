#include <iostream>
using namespace std;

void limpiarEspacios(char* cad) {
    char* lectura = cad;
    char* escritura = cad;
    bool espacioPrevio = false;

    while (*lectura) {
        if (*lectura != ' ') {
            *escritura++ = *lectura;
            espacioPrevio = false;
        } else if (!espacioPrevio) {
            *escritura++ = ' ';
            espacioPrevio = true;
        }
        lectura++;
    }
    *escritura = '\0';
}

int main() {
    char* texto = new char[100];
    cout << "Ingrese una frase: ";
    cin.getline(texto, 100);
    limpiarEspacios(texto);
    cout << "Resultado: " << texto << endl;
    delete[] texto;
    return 0;
}
