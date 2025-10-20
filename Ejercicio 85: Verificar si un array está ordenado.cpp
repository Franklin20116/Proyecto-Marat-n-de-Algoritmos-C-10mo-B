#include <iostream>
using namespace std;

bool estaOrdenado(int* arr, int n) {
    for (int i = 1; i < n; i++)
        if (arr[i] < arr[i - 1]) return false;
    return true;
}

int main() {
    int n;
    cout << "Tamaño del array: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << (estaOrdenado(arr, n) ? "Ordenado" : "Desordenado") << endl;
    delete[] arr;
    return 0;
}
