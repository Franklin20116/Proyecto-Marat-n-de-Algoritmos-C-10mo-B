#include <iostream>
using namespace std;

int contar(const char* texto, char objetivo) {
    int c = 0;
    while (*texto) {
        if (*texto == objetivo) c++;
        texto++;
    }
    return c;
}

int main() {
    char* frase = new char[100];
    char letra;
    cout << "Ingrese una frase: ";
    cin.getline(frase, 100);
    cout << "Letra a buscar: ";
    cin >> letra;

    cout << "Ocurre " << contar(frase, letra) << " veces." << endl;
    delete[] frase;
    return 0;
}
