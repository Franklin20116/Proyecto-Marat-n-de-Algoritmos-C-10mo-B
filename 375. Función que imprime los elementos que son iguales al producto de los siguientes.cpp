#include 
using namespace std;

void imprimirProductoSiguientes(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int prod = 1;
        for (int j = i + 1; j < n; j++) prod *= arr[j];
        if (arr[i] == prod) cout << arr[i] << " ";
    }
}
