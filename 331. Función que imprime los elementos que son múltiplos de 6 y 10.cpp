#include 
using namespace std;

void imprimirMultiplos6y10(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (arr[i] % 6 == 0 && arr[i] % 10 == 0)
            cout << arr[i] << " ";
}
