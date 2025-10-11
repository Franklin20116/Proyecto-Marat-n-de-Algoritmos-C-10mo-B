#include 
using namespace std;

void imprimirProductoAnteriores(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int prod = 1;
        for (int j = 0; j < i; j++) prod *= arr[j];
        if (arr[i] == prod) cout << arr[i] << " ";
    }
}
