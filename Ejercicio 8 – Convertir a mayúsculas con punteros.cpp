#include <iostream>
using namespace std;

void aMayusculas(char* cad) {
    while (*cad) {
        if (*cad >= 'a' && *cad <= 'z') *cad -= 32;
        cad++;
    }
}

int main() {
    char frase[100];
    cout << "Ingrese una frase: ";
    cin.getline(frase, 100);
    aMayusculas(frase);
    cout << "Frase en mayúsculas: " << frase << endl;
    return 0;
}
