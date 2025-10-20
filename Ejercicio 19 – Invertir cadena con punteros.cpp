#include <iostream>
#include <cstring>
using namespace std;

void invertirCadena(char* cad) {
    int len = strlen(cad);
    for (int i = 0; i < len / 2; i++) {
        char temp = cad[i];
        cad[i] = cad[len - 1 - i];
        cad[len - 1 - i] = temp;
    }
}

int main() {
    char frase[100];
    cout << "Ingrese una frase: ";
    cin.getline(frase, 100);
    invertirCadena(frase);
    cout << "Frase invertida: " << frase << endl;
    return 0;
}
