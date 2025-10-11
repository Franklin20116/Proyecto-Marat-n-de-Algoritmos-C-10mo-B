#include 
using namespace std;

void imprimirSumaSiguientes(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int suma = 0;
        for (int j = i + 1; j < n; j++) suma += arr[j];
        if (arr[i] == suma) cout << arr[i] << " ";
    }
}
