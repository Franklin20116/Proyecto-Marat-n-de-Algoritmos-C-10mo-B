#include 
using namespace std;

int mayor(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

void imprimirIgualesMayor(int arr[], int n) {
    int max = mayor(arr, n);
    for (int i = 0; i < n; i++)
        if (arr[i] == max)
            cout << arr[i] << " ";
}
