#include <iostream>
using namespace std;

int* eliminarDuplicados(int* arr, int n, int& nuevoTam) {
    bool vistos[1000] = {false};
    int* temp = new int[n];
    nuevoTam = 0;
    for (int i = 0; i < n; i++) {
        if (!vistos[arr[i]]) {
            vistos[arr[i]] = true;
            temp[nuevoTam++] = arr[i];
        }
    }
    int* resultado = new int[nuevoTam];
    for (int i = 0; i < nuevoTam; i++)
        resultado[i] = temp[i];
    delete[] temp;
    return resultado;
}

int main() {
    int n, nuevoTam;
    cout << "Tamaño del arreglo: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int* sinDuplicados = eliminarDuplicados(arr, n, nuevoTam);
    cout << "Arreglo sin duplicados: ";
    for (int i = 0; i < nuevoTam; i++) cout << sinDuplicados[i] << " ";
    cout << endl;
    delete[] arr;
    delete[] sinDuplicados;
    return 0;
}
