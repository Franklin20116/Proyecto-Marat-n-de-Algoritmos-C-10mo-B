#include <iostream>
#include <cstring>
using namespace std;

char* caracteresUnicos(char* cad, int& tam) {
    bool usados[256] = {false};
    tam = 0;
    for (char* p = cad; *p; p++) {
        if (!usados[(unsigned char)*p]) {
            usados[(unsigned char)*p] = true;
            tam++;
        }
    }
    char* resultado = new char[tam + 1];
    int i = 0;
    for (char* p = cad; *p; p++) {
        if (usados[(unsigned char)*p]) {
            resultado[i++] = *p;
            usados[(unsigned char)*p] = false;
        }
    }
    resultado[i] = '\0';
    return resultado;
}

int main() {
    char texto[200];
    cout << "Ingrese una cadena: ";
    cin.getline(texto, 200);
    int tam;
    char* unicos = caracteresUnicos(texto, tam);
    cout << "Caracteres únicos: " << unicos << endl;
    delete[] unicos;
    return 0;
}
