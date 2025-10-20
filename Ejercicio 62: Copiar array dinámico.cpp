#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Tamaño del array: ";
    cin >> n;

    int* original = new int[n];
    int* copia = new int[n];

    cout << "Ingrese los valores: ";
    for (int i = 0; i < n; i++) {
        cin >> original[i];
        *(copia + i) = *(original + i);
    }

    cout << "Array copiado: ";
    for (int i = 0; i < n; i++) cout << copia[i] << " ";

    delete[] original;
    delete[] copia;
    return 0;
}
