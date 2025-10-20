#include <iostream>
#include <cstring>
using namespace std;

bool esPalindromo(char* cad) {
    int len = strlen(cad);
    char* inicio = cad;
    char* fin = cad + len - 1;
    while (inicio < fin) {
        if (*inicio != *fin) return false;
        inicio++;
        fin--;
    }
    return true;
}

int main() {
    char palabra[100];
    cout << "Ingrese una palabra: ";
    cin.getline(palabra, 100);
    if (esPalindromo(palabra))
        cout << "Es un palíndromo.\n";
    else
        cout << "No es un palíndromo.\n";
    return 0;
}
