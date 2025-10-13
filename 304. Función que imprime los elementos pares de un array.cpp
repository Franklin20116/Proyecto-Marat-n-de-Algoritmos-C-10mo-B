#include 
using namespace std;

void imprimirPares(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0) cout << arr[i] << " ";
}
