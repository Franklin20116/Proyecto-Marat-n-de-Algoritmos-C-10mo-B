#include 
using namespace std;

void imprimirPromedioVecinos(int arr[], int n) {
    for (int i = 1; i < n - 1; i++)
        if (arr[i] == (arr[i - 1] + arr[i + 1]) / 2)
            cout << arr[i] << " ";
}
