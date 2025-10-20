#include 
using namespace std;

void copiarCadena(char* destino, char* origen) {
    while (*origen) {
        *destino = *origen;
        destino++;
        origen++;
    }
    *destino = '\0';
}

int main() {
    char origen[100], destino[100];
    cout << "Ingrese una cadena: ";
    cin.getline(origen, 100);
    copiarCadena(destino, origen);
    cout << "Cadena copiada: " << destino << endl;
    return 0;
}
