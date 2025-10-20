#include <iostream>
using namespace std;

void invertir(char* cadena) {
    int len = 0;
    while (cadena[len] != '\0') len++;
    for (int i = 0; i < len / 2; i++) {
        char temp = cadena[i];
        cadena[i] = cadena[len - i - 1];
        cadena[len - i - 1] = temp;
    }
}

int main() {
    char* texto = new char[100];
    cout << "Ingrese una cadena: ";
    cin.getline(texto, 100);
    invertir(texto);
    cout << "Invertida: " << texto << endl;
    delete[] texto;
    return 0;
}
