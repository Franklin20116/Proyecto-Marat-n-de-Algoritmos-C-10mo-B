#include <iostream>
using namespace std;

int* invertir(int* arr, int n) {
    int* nuevo = new int[n];
    for (int i = 0; i < n; i++) {
        nuevo[i] = arr[n - 1 - i];
    }
    return nuevo;
}

int main() {
    int n;
    cout << "Tamaño del arreglo: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int* invertido = invertir(arr, n);
    cout << "Arreglo invertido: ";
    for (int i = 0; i < n; i++) cout << invertido[i] << " ";
    cout << endl;
    delete[] arr;
    delete[] invertido;
    return 0;
}
