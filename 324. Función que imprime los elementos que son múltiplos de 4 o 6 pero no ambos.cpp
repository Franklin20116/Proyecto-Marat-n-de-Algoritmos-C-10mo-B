#include 
using namespace std;

void imprimirMultiplos4o6(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if ((arr[i] % 4 == 0 || arr[i] % 6 == 0) && arr[i] % 12 != 0)
            cout << arr[i] << " ";
}
