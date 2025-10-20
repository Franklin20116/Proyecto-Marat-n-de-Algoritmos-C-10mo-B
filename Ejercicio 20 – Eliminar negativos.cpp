#include <iostream>
using namespace std;

int* eliminarNegativos(int* arr, int n, int& nuevoTam) {
    nuevoTam = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] >= 0) nuevoTam++;
    int* nuevo = new int[nuevoTam];
    int j = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] >= 0) nuevo[j++] = arr[i];
    return nuevo;
}

int main() {
    int n, nuevoTam;
    cout << "Tamaño del arreglo: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int* positivos = eliminarNegativos(arr, n, nuevoTam);
    cout << "Arreglo sin negativos: ";
    for (int i = 0; i < nuevoTam; i++) cout << positivos[i] << " ";
    cout << endl;
    delete[] arr;
    delete[] positivos;
    return 0;
}
