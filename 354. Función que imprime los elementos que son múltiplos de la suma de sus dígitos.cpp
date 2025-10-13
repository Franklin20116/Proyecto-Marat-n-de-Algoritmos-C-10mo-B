#include 
using namespace std;

int sumaDigitos(int x) {
    int suma = 0;
    while (x > 0) {
        suma += x % 10;
        x /= 10;
    }
    return suma;
}

void imprimirMultiplosSumaDigitos(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int suma = sumaDigitos(arr[i]);
        if (suma != 0 && arr[i] % suma == 0)
            cout << arr[i] << " ";
    }
}
