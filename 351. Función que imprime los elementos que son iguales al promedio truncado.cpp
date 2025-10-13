#include 
using namespace std;

float promedio(int arr[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) suma += arr[i];
    return suma / n;
}

void imprimirPromedioTruncado(int arr[], int n) {
    int prom = (int)promedio(arr, n);
    for (int i = 0; i < n; i++)
        if (arr[i] == prom)
            cout << arr[i] << " ";
}
