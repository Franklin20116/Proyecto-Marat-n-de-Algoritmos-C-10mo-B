#include 
using namespace std;

void imprimirMitadSiguiente(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        if (arr[i] * 2 == arr[i + 1])
            cout << arr[i] << " ";
}
