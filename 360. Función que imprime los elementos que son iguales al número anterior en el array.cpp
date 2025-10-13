#include 
using namespace std;

void imprimirIgualesAnterior(int arr[], int n) {
    for (int i = 1; i < n; i++)
        if (arr[i] == arr[i - 1])
            cout << arr[i] << " ";
}
