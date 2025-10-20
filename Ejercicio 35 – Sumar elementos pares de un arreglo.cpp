#include <iostream>
using namespace std;

int sumaPares(int* arr, int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0) suma += *(arr + i);
    }
    return suma;
}

int main() {
    int n;
    cout << "Tamaño del arreglo: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Suma de pares: " << sumaPares(arr, n) << endl;
    delete[] arr;
    return 0;
}
