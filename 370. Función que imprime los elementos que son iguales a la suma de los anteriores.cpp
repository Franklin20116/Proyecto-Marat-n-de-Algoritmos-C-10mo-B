#include 
using namespace std;

void imprimirSumaAnteriores(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int suma = 0;
        for (int j = 0; j < i; j++) suma += arr[j];
        if (arr[i] == suma) cout << arr[i] << " ";
    }
}
