#include <iostream>
using namespace std;

bool esVocal(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void eliminarVocales(char* cad, char* resultado) {
    while (*cad) {
        if (!esVocal(*cad)) {
            *resultado = *cad;
            resultado++;
        }
        cad++;
    }
    *resultado = '\0';
}

int main() {
    char frase[200], sinVocales[200];
    cout << "Ingrese una frase: ";
    cin.getline(frase, 200);
    eliminarVocales(frase, sinVocales);
    cout << "Frase sin vocales: " << sinVocales << endl;
    return 0;
}
