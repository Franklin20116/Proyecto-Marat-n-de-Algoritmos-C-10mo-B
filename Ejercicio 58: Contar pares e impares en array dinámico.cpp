#include <iostream>
using namespace std;

int main() {
    int n, pares = 0, impares = 0;
    cout << "Tamaño del array: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Ingrese " << n << " números: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) pares++;
        else impares++;
    }

    cout << "Pares: " << pares << ", Impares: " << impares << endl;
    delete[] arr;
    return 0;
}
