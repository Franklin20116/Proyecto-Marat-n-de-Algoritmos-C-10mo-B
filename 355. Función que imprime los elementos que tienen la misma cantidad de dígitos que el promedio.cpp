#include 
using namespace std;

int contarDigitos(int x) {
    int d = 0;
    if (x == 0) return 1;
    while (x != 0) {
        d++;
        x /= 10;
    }
    return d;
}

float promedio(int arr[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) suma += arr[i];
    return suma / n;
}

void imprimirCoincidenDigitosPromedio(int arr[], int n) {
    int digProm = contarDigitos((int)promedio(arr, n));
    for (int i = 0; i < n; i++)
        if (contarDigitos(arr[i]) == digProm)
            cout << arr[i] << " ";
}
