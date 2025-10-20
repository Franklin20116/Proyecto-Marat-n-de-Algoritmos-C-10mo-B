#include <iostream>
using namespace std;

bool esVocal(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    char frase[200];
    cout << "Ingrese una frase: ";
    cin.getline(frase, 200);
    int contador = 0;
    for (char* p = frase; *p; p++) {
        if (esVocal(*p)) contador++;
    }
    cout << "Cantidad de vocales: " << contador << endl;
    return 0;
}
