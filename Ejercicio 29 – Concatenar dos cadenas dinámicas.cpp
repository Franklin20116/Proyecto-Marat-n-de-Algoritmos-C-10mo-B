#include <iostream>
#include <cstring>
using namespace std;

char* concatenar(char* a, char* b) {
    int len = strlen(a) + strlen(b);
    char* resultado = new char[len + 1];
    while (*a) *resultado++ = *a++;
    while (*b) *resultado++ = *b++;
    *resultado = '\0';
    return resultado - len;
}

int main() {
    char cad1[100], cad2[100];
    cout << "Ingrese primera cadena: ";
    cin.getline(cad1, 100);
    cout << "Ingrese segunda cadena: ";
    cin.getline(cad2, 100);
    char* resultado = concatenar(cad1, cad2);
    cout << "Cadena concatenada: " << resultado << endl;
    delete[] resultado;
    return 0;
}
