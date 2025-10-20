#include <iostream>
using namespace std;

void aMinusculas(char* cad) {
    while (*cad) {
        if (*cad >= 'A' && *cad <= 'Z') *cad += 32;
        cad++;
    }
}

int main() {
    char frase[200];
    cout << "Ingrese una frase: ";
    cin.getline(frase, 200);
    aMinusculas(frase);
    cout << "Frase en minúsculas: " << frase << endl;
    return 0;
}
