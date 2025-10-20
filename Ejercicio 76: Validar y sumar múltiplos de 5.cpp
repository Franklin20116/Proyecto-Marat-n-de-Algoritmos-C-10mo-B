#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Ingrese los valores: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int suma = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 5 == 0) suma += arr[i];

    cout << "Suma de múltiplos de 5: " << suma << endl;
    delete[] arr;
    return 0;
}
