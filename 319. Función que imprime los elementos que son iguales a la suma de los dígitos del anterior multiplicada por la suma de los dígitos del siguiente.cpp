#include 
using namespace std;

int sumaDigitos(int x) {
    int suma = 0;
    x = abs(x);
    while (x > 0) {
        suma += x % 10;
        x /= 10;
    }
    return suma;
}

void imprimirSandwichDigitos(int arr[], int n) {
    for (int i = 1; i < n - 1; i++) {
        int sumaAnt = sumaDigitos(arr[i - 1]);
        int sumaSig = sumaDigitos(arr[i + 1]);
        if (arr[i] == sumaAnt * sumaSig)
            cout << arr[i] << " ";
    }
}
