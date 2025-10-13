#include 
using namespace std;

void imprimirMultiplos5No10(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (arr[i] % 5 == 0 && arr[i] % 10 != 0)
            cout << arr[i] << " ";
}
