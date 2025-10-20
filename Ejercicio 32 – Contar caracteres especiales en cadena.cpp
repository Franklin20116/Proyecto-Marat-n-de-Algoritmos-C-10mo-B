#include <iostream>
using namespace std;

bool esEspecial(char c) {
    return !(isalnum(c) || c == ' ');
}

int contarEspeciales(char* cad) {
    int contador = 0;
    while (*cad) {
        if (esEspecial(*cad)) contador++;
        cad++;
    }
    return contador;
}

int main() {
    char texto[200];
    cout << "Ingrese una cadena: ";
    cin.getline(texto, 200);
    cout << "Caracteres especiales: " << contarEspeciales(texto) << endl;
    return 0;
}
