#include <iostream>
using namespace std;

void ordenar(int* arr, int n) {
    for (int* i = arr; i < arr + n - 1; i++) {
        for (int* j = i + 1; j < arr + n; j++) {
            if (*i > *j) {
                int temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Tamaño del arreglo: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    ordenar(arr, n);
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    delete[] arr;
    return 0;
}
