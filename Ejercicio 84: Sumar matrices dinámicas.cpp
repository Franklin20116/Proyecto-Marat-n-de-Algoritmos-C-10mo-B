#include <iostream>
using namespace std;

int main() {
    int filas, columnas;
    cout << "Filas y columnas: ";
    cin >> filas >> columnas;

    int** A = new int*[filas];
    int** B = new int*[filas];
    int** C = new int*[filas];

    for (int i = 0; i < filas; i++) {
        A[i] = new int[columnas];
        B[i] = new int[columnas];
        C[i] = new int[columnas];
    }

    cout << "Matriz A:\n";
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            cin >> A[i][j];

    cout << "Matriz B:\n";
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            cin >> B[i][j];

    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            C[i][j] = A[i][j] + B[i][j];

    cout << "Suma:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < filas; i++) {
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }
    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
