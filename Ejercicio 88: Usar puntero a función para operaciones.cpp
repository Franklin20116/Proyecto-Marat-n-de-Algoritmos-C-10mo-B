#include <iostream>
using namespace std;

int sumar(int a, int b) { return a + b; }
int restar(int a, int b) { return a - b; }
int multiplicar(int a, int b) { return a * b; }

int main() {
    int (*operacion)(int, int);
    int opcion, x, y;

    cout << "1. Sumar\n2. Restar\n3. Multiplicar\nOpción: ";
    cin >> opcion;
    cout << "Ingrese dos valores: ";
    cin >> x >> y;

    switch (opcion) {
        case 1: operacion = sumar; break;
        case 2: operacion = restar; break;
        case 3: operacion = multiplicar; break;
        default: cout << "Opción inválida\n"; return 0;
    }

    cout << "Resultado: " << operacion(x, y) << endl;
    return 0;
}
