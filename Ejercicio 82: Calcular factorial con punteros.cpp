#include <iostream>
using namespace std;

unsigned long long factorial(int* n) {
    unsigned long long resultado = 1;
    for (int i = 2; i <= *n; i++)
        resultado *= i;
    return resultado;
}

int main() {
    int num;
    cout << "Ingrese un número entero positivo: ";
    cin >> num;

    if (num < 0) {
        cout << "El factorial no está definido para negativos." << endl;
    } else {
        cout << "Factorial: " << factorial(&num) << endl;
    }

    return 0;
}
