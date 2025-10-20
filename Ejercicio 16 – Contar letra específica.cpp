#include <iostream>
using namespace std;

int contarLetra(char* cad, char letra) {
    int contador = 0;
    while (*cad) {
        if (*cad == letra) contador++;
        cad++;
    }
    return contador;
}

int main() {
    char frase[200], letra;
    cout << "Ingrese una frase: ";
    cin.getline(frase, 200);
    cout << "Letra a contar: ";
    cin >> letra;
    cout << "Cantidad de '" << letra << "': " << contarLetra(frase, letra) << endl;
    return 0;
}
