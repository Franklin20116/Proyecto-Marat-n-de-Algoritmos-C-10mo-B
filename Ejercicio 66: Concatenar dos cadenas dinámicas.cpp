#include <iostream>
using namespace std;

void concatenar(const char* a, const char* b, char* resultado) {
    while (*a) {
        *resultado = *a;
        resultado++; a++;
    }
    while (*b) {
        *resultado = *b;
        resultado++; b++;
    }
    *resultado = '\0';
}

int main() {
    char* cad1 = new char[50];
    char* cad2 = new char[50];
    char* resultado = new char[100];

    cout << "Cadena 1: ";
    cin.getline(cad1, 50);
    cout << "Cadena 2: ";
    cin.getline(cad2, 50);

    concatenar(cad1, cad2, resultado);
    cout << "Concatenada: " << resultado << endl;

    delete[] cad1;
    delete[] cad2;
    delete[] resultado;
    return 0;
}
