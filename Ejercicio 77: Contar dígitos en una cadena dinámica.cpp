#include <iostream>
using namespace std;

int contarDigitos(const char* cad) {
    int c = 0;
    while (*cad) {
        if (*cad >= '0' && *cad <= '9') c++;
        cad++;
    }
    return c;
}

int main() {
    char* texto = new char[100];
    cout << "Ingrese una cadena: ";
    cin.getline(texto, 100);
    cout << "Dígitos encontrados: " << contarDigitos(texto) << endl;
    delete[] texto;
    return 0;
}
