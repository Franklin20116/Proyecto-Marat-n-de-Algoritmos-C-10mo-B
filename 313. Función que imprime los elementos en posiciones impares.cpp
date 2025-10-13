#include 
using namespace std;

void imprimirPosicionesImpares(int arr[], int n) {
    for (int i = 1; i < n; i += 2)
        cout << arr[i] << " ";
}
