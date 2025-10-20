#include <iostream>
using namespace std;

float promedio(int* arr, int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += *(arr + i);
    }
    return static_cast<float>(suma) / n;
}

int main() {
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Promedio: " << promedio(arr, n) << endl;
    delete[] arr;
    return 0;
}
