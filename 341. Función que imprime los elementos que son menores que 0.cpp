#include 
using namespace std;

void imprimirNegativos(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (arr[i] < 0)
            cout << arr[i] << " ";
}
