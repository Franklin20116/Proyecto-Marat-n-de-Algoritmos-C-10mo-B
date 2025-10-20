#include <iostream>
using namespace std;

int contarMayusculas(char* cad) {
    int contador = 0;
    while (*cad) {
        if (*cad >= 'A' && *cad <= 'Z') contador++;
        cad++;
    }
    return contador;
}

int main() {
    char frase[200];
    cout << "Ingrese una frase: ";
    cin.getline(frase, 200);
    cout << "Mayúsculas encontradas: " << contarMayusculas(frase) << endl;
    return 0;
}

