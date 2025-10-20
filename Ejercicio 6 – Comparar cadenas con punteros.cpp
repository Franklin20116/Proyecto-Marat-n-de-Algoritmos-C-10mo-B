#include <iostream>
using namespace std;

bool sonIguales(char* a, char* b) {
    while (*a && *b) {
        if (*a != *b) return false;
        a++; b++;
    }
    return *a == *b;
}

int main() {
    char cad1[100], cad2[100];
    cout << "Ingrese la primera cadena: ";
    cin.getline(cad1, 100);
    cout << "Ingrese la segunda cadena: ";
    cin.getline(cad2, 100);
    if (sonIguales(cad1, cad2))
        cout << "Las cadenas son iguales.\n";
    else
        cout << "Las cadenas son diferentes.\n";
    return 0;
}
