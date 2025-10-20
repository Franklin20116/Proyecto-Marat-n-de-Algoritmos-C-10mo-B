#include <iostream>
using namespace std;

void operaciones(int* a, int* b) {
    cout << "Suma: " << (*a + *b) << endl;
    cout << "Resta: " << (*a - *b) << endl;
    cout << "Multiplicación: " << (*a * *b) << endl;
    if (*b != 0)
        cout << "División: " << ((float)*a / *b) << endl;
    else
        cout << "No se puede dividir por cero." << endl;
}

int main() {
    int x, y;
    cout << "Ingrese dos enteros: ";
    cin >> x >> y;
    operaciones(&x, &y);
    return 0;
}
