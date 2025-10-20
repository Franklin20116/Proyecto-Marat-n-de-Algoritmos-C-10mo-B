#include <iostream>
using namespace std;

void reemplazarVocales(char* cad) {
    while (*cad) {
        char c = tolower(*cad);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cad = '';
        }
        cad++;
    }
}

int main() {
    char frase[200];
    cout << "Ingrese una frase: ";
    cin.getline(frase, 200);
    reemplazarVocales(frase);
    cout << "Frase modificada: " << frase << endl;
    return 0;
}
