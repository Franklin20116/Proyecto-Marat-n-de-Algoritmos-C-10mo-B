#include <iostream>
using namespace std;

int contarDigitos(char* cad) {
    int contador = 0;
    while (*cad) {
        if (*cad >= '0' && *cad <= '9') contador++;
        cad++;
    }
    return contador;
}

int main() {
    char texto[200];
    cout << "Ingrese una cadena: ";
    cin.getline(texto, 200);
    cout << "Cantidad de dígitos: " << contarDigitos(texto) << endl;
    return 0;
}
