#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cout << "Tamaño de la matriz cuadrada: ";
    cin >> n;
    int** matriz = new int*[n];
    for (int i = 0; i < n; i++)
        matriz[i] = new int[n];

    cout << "Matriz generada:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 100;
            cout << matriz[i][j] << " ";
            if (j == n - 1) cout << endl;
        }

    int suma = 0;
    for (int i = 0; i < n; i++)
        suma += matriz[i][i];

    cout << "Suma de la diagonal principal: " << suma << endl;

    for (int i = 0; i < n; i++) delete[] matriz[i];
    delete[] matriz;
    return 0;
}
