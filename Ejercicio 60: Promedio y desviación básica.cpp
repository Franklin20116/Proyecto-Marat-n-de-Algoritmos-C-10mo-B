#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Tamaño del array: ";
    cin >> n;

    int* arr = new int[n];
    int suma = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        suma += arr[i];
    }

    float promedio = (float)suma / n;
    cout << "Promedio: " << promedio << endl;
    cout << "Valores mayores al promedio: ";
    for (int i = 0; i < n; i++)
        if (arr[i] > promedio) cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
