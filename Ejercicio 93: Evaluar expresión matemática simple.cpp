#include <iostream>
using namespace std;

float suma(float a, float b) { return a + b; }
float resta(float a, float b) { return a - b; }
float mult(float a, float b) { return a * b; }
float div(float a, float b) { return b != 0 ? a / b : 0; }

int main() {
    float a, b;
    char op;
    float (*f)(float, float);

    cout << "Ingrese expresión (ej. 3 + 4): ";
    cin >> a >> op >> b;

    switch (op) {
        case '+': f = suma; break;
        case '-': f = resta; break;
        case '*': f = mult; break;
        case '/': f = div; break;
        default: cout << "Operador inválido\n"; return 0;
    }

    cout << "Resultado: " << f(a, b) << endl;
    return 0;
}
