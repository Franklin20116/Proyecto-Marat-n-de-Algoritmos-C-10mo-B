#include <iostream>
#include <cstring>
using namespace std;

bool validar(const char* clave) {
    if (strlen(clave) < 8) return false;
    while (*clave) {
        if (*clave >= '0' && *clave <= '9') return true;
        clave++;
    }
    return false;
}

int main() {
    char* clave = new char[100];
    cout << "Ingrese una contraseña: ";
    cin.getline(clave, 100);

    if (validar(clave))
        cout << "Contraseña válida." << endl;
    else
        cout << "Debe tener al menos 8 caracteres y un número." << endl;

    delete[] clave;
    return 0;
}
