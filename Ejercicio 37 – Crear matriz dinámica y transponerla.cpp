#include <iostream>
using namespace std;

int main() {
    int filas, columnas;
    cout << "Ingrese filas y columnas: ";
    cin >> filas >> columnas;

    int** matriz = new int*[filas];
    for (int i = 0; i < filas; i++)
        matriz[i] = new int[columnas];

    cout << "Ingrese los elementos:\n";
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            cin >> matriz[i][j];

    cout << "Matriz transpuesta:\n";
    for (int j = 0; j < columnas; j++) {
        for (int i = 0; i < filas; i++)
            cout << matriz[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < filas; i++) delete[] matriz[i];
    delete[] matriz;
    return 0;
}
