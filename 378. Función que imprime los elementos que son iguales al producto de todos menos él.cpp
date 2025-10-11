#include 
using namespace std;

void imprimirProductoExcluyendo(int arr[], int n) {
    int total = 1;
    for (int i = 0; i < n; i++) total *= arr[i];
    for (int i = 0; i < n; i++)
        if (arr[i] != 0 && arr[i] == total / arr[i])
            cout << arr[i] << " ";
}
