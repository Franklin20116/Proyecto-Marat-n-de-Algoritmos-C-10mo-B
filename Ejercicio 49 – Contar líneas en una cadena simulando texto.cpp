#include <iostream>
using namespace std;

int contarLineas(char* texto) {
    int contador = 1;
    while (*texto) {
        if (*texto == '\n') contador++;
        texto++;
    }
    return contador;
}

int main() {
    char texto[500];
    cout << "Ingrese texto (use \\n para simular saltos de línea):\n";
    cin.getline(texto, 500);
    cout << "Cantidad de líneas: " << contarLineas(texto) << endl;
    return 0;
}
