#include <iostream>
using namespace std;

int* generarCuadrados(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++) arr[i] = (i + 1) * (i + 1);
    return arr;
}

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    cin >> n;
    int* cuadrados = generarCuadrados(n);
    cout << "Cuadrados: ";
    for (int i = 0; i < n; i++) cout << cuadrados[i] << " ";
    cout << endl;
    delete[] cuadrados;
    return 
