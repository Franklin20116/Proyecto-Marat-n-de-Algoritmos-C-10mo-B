#include 
using namespace std;

void imprimirNoMultiplos2y3(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 != 0 && arr[i] % 3 != 0)
            cout << arr[i] << " ";
}
