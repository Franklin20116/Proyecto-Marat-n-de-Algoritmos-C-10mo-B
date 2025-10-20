#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Ingrese dimensiones de las matrices (n m): ";
    cin >> n >> m;

    int** A = new int*[n];
    int** B = new int*[n];
    int** C = new int*[n];
    for (int i = 0; i < n; i++) {
        A[i] = new int[m];
        B[i] = new int[m];
        C[i] = new int[m];
    }

    cout << "Ingrese elementos de la matriz A:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];

    cout << "Ingrese elementos de la matriz B:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> B[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            C[i][j] = A[i][j] + B[i][j];

    cout << "Matriz suma C:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }
    delete[] A;
    delete[] B;
    delete[] C;
    return 0;
}
