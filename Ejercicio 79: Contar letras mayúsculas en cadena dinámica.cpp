#include <iostream>
using namespace std;

int contarMayusculas(const char* cad) {
    int c = 0;
    while (*cad) {
        if (*cad >= 'A' && *cad <= 'Z') c++;
        cad++;
    }
    return c;
}

int main() {
    char* texto = new char[100];
    cout << "Ingrese una cadena: ";
    cin.getline(texto, 100);
    cout << "Mayúsculas: " << contarMayusculas(texto) << endl;
    delete[] texto;
    return 0;
}
