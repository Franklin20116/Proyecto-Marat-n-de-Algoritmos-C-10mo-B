#include <iostream>
#include <cstring>
using namespace std;

void reemplazarPalabra(char* texto, const char* objetivo, const char* reemplazo) {
    char resultado[300] = "";
    char* token = strtok(texto, " ");
    while (token) {
        if (strcmp(token, objetivo) == 0)
            strcat(resultado, reemplazo);
        else
            strcat(resultado, token);
        strcat(resultado, " ");
        token = strtok(nullptr, " ");
    }
    strcpy(texto, resultado);
}

int main() {
    char frase[200], objetivo[50], reemplazo[50];
    cout << "Ingrese una frase: ";
    cin.getline(frase, 200);
    cout << "Palabra a reemplazar: ";
    cin.getline(objetivo, 50);
    cout << "Palabra nueva: ";
    cin.getline(reemplazo, 50);
    reemplazarPalabra(frase, objetivo, reemplazo);
    cout << "Frase modificada: " << frase << endl;
    return 0;
}
