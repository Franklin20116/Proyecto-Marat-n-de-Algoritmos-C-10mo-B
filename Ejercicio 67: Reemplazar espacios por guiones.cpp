#include <iostream>
using namespace std;

void reemplazarEspacios(char* cadena) {
    while (*cadena) {
        if (*cadena == ' ') *cadena = '-';
        cadena++;
    }
}

int main() {
    char* texto = new char[100];
    cout << "Ingrese una frase: ";
    cin.getline(texto, 100);
    reemplazarEspacios(texto);
    cout << "Modificada: " << texto << endl;
    delete[] texto;
    return 0;
}
