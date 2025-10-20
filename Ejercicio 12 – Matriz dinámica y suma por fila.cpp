#include <iostream>
using namespace std;

int main() {
    int filas, columnas;
    cout << "Ingrese filas y columnas: ";
    cin >> filas >> columnas;
    int** matriz = new int*[filas];
    for (int i = 0; i < filas; i++)
        matriz[i] = new int[columnas];

    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }

    for (int i = 0; i < filas; i++) {
        int suma = 0;
        for (int j = 0; j < columnas; j++)
            suma += matriz[i][j];
        cout << "Suma fila " << i << ": " << suma << endl;
    }

    for (int i = 0; i < filas; i++) delete[] matriz[i];
    delete[] matriz;
    return 0;
}

