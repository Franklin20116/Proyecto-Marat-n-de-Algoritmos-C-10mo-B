#include 
using namespace std;

void imprimirSumaVecinos(int arr[], int n) {
    for (int i = 1; i < n - 1; i++)
        if (arr[i] == arr[i - 1] + arr[i + 1])
            cout << arr[i] << " ";
}
