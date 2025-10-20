#include <iostream>
using namespace std;

void comparar(int* a, int* b) {
    if (*a > *b)
        cout << *a << " es mayor que " << *b << endl;
    else if (*a < *b)
        cout << *a << " es menor que " << *b << endl;
    else
        cout << "Ambos valores son iguales." << endl;
}

int main() {
    int x, y;
    cout << "Ingrese dos valores: ";
    cin >> x >> y;
    comparar(&x, &y);
    return 0;
}
