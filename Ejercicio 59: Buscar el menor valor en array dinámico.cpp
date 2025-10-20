#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Ingrese los valores: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int* menor = arr;
    for (int i = 1; i < n; i++)
        if (arr[i] < *menor) menor = &arr[i];

    cout << "Menor valor: " << *menor << endl;
    delete[] arr;
    return 0;
}
