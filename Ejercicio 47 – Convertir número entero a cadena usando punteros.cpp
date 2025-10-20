#include <iostream>
#include <cstring>
using namespace std;

void enteroACadena(int num, char* cad) {
    int i = 0;
    bool negativo = false;
    if (num < 0) {
        negativo = true;
        num = -num;
    }
    do {
        cad[i++] = (num % 10) + '0';
        num /= 10;
    } while (num > 0);
    if (negativo) cad[i++] = '-';
    cad[i] = '\0';

    // Invertir la cadena
    for (int j = 0; j < i / 2; j++) {
        char temp = cad[j];
        cad[j] = cad[i - 1 - j];
        cad[i - 1 - j] = temp;
    }
}

int main() {
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;
    char cadena[20];
    enteroACadena(numero, cadena);
    cout << "Número como cadena: " << cadena << endl;
    return 0;
}
