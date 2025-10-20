#include <iostream>
using namespace std;

int* sumaArreglos(int* a, int* b, int n) {
    int* resultado = new int[n];
    for (int i = 0; i < n; i++) {
        resultado[i] = a[i] + b[i];
    }
    return resultado;
}

int main() {
    int n;
    cout << "Tamaño de los arreglos: ";
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];
    cout << "Elementos del primer arreglo:\n";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Elementos del segundo arreglo:\n";
    for (int i = 0; i < n; i++) cin >> b[i];
    int* suma = sumaArreglos(a, b, n);
    cout << "Suma de arreglos: ";
    for (int i = 0; i < n; i++) cout << suma[i] << " ";
    cout << endl;
    delete[] a;
    delete[] b;
    delete[] suma;
    return 0;
}
