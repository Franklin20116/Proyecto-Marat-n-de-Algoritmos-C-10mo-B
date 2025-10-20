#include <iostream>
using namespace std;

int* duplicar(int* arr, int n) {
    int* nuevo = new int[n * 2];
    for (int i = 0; i < n; i++) {
        nuevo[2 * i] = arr[i];
        nuevo[2 * i + 1] = arr[i];
    }
    return nuevo;
}

int main() {
    int n;
    cout << "Tamaño del arreglo: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int* duplicado = duplicar(arr, n);
    cout << "Arreglo duplicado: ";
    for (int i = 0; i < 2 * n; i++) cout << duplicado[i] << " ";
    cout << endl;
    delete[] arr;
    delete[] duplicado;
    return 0;
}
