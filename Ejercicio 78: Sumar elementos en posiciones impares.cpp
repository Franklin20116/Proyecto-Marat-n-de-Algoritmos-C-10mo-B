#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Tamaño del array: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Ingrese los valores: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int suma = 0;
    for (int i = 1; i < n; i += 2)
        suma += arr[i];

    cout << "Suma en posiciones impares: " << suma << endl;
    delete[] arr;
    return 0;
}
