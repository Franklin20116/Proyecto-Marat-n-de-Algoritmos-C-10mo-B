#include <iostream>
using namespace std;

int mayor(int* arr, int n) {
    int max = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) max = *(arr + i);
    }
    return max;
}

int main() {
    int n;
    cout << "Ingrese tamaño del arreglo: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Mayor elemento: " << mayor(arr, n) << endl;
    delete[] arr;
    return 0;
}
