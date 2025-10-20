#include <iostream>
using namespace std;

bool iguales(const char* a, const char* b) {
    while (*a && *b) {
        if (*a != *b) return false;
        a++; b++;
    }
    return (*a == '\0' && *b == '\0');
}

int main() {
    char* cad1 = new char[100];
    char* cad2 = new char[100];
    cout << "Cadena 1: ";
    cin.getline(cad1, 100);
    cout << "Cadena 2: ";
    cin.getline(cad2, 100);

    cout << (iguales(cad1, cad2) ? "Son iguales" : "Son diferentes") << endl;

    delete[] cad1;
    delete[] cad2;
    return 0;
}
