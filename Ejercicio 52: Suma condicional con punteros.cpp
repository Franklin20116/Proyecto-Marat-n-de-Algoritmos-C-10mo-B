#include <iostream>
using namespace std;

bool sumaSiPositivos(int* a, int* b, int* resultado) {
    if (*a > 0 && *b > 0) {
        *resultado = *a + *b;
        return true;
    }
    return false;
}

int main() {
    int x, y, r;
    cout << "Ingrese dos enteros: ";
    cin >> x >> y;
    if (sumaSiPositivos(&x, &y, &r))
        cout << "Suma: " << r << endl;
    else
        cout << "Ambos valores deben ser positivos." << endl;
    return 0;
}
