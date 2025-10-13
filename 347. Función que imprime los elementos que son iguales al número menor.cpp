#include 
using namespace std;

int menor(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min) min = arr[i];
    return min;
}

void imprimirIgualesMenor(int arr[], int n) {
    int min = menor(arr, n);
    for (int i = 0; i < n; i++)
        if (arr[i] == min)
            cout << arr[i] << " ";
}
