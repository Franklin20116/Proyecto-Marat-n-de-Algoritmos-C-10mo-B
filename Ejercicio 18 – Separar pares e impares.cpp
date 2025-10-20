#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n;
    cout << "Tamaño del arreglo: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Arreglo generado: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }
    cout << "\nPares: ";
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0) cout << arr[i] << " ";
    cout << "\nImpares: ";
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 != 0) cout << arr[i] << " ";
    cout << endl;
    delete[] arr;
    return 0;
}
