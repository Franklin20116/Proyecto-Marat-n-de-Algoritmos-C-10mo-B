#include <iostream>
using namespace std;

bool buscar(int* arr, int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == valor) return true;
    }
    return false;
}

int main() {
    int n, valor;
    cout << "Tamaño del arreglo: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Valor a buscar: ";
    cin >> valor;
    if (buscar(arr, n, valor))
        cout << "El valor está en el arreglo.\n";
    else
        cout << "El valor no se encuentra.\n";
    delete[] arr;
    return 0;
}
