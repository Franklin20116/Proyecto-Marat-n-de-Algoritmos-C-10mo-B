#include 
#include 
using namespace std;

void imprimirRaizSiguiente(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        if (arr[i] == sqrt(arr[i + 1]))
            cout << arr[i] << " ";
}
