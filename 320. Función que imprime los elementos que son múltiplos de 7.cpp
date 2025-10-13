#include 
using namespace std;

void imprimirMultiplos7(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (arr[i] % 7 == 0)
            cout << arr[i] << " ";
}
