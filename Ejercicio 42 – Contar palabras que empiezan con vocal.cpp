#include <iostream>
#include <cstring>
using namespace std;

bool empiezaConVocal(const char* palabra) {
    char c = tolower(palabra[0]);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    char frase[200];
    cout << "Ingrese una frase: ";
    cin.getline(frase, 200);
    int contador = 0;
    char* token = strtok(frase, " ");
    while (token) {
        if (empiezaConVocal(token)) contador++;
        token = strtok(nullptr, " ");
    }
    cout << "Palabras que empiezan con vocal: " << contador << endl;
    return 0;
}
