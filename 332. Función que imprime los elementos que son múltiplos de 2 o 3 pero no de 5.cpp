#include 
using namespace std;

void imprimirMultiplos2o3No5(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if ((arr[i] % 2 == 0 || arr[i] % 3 == 0) && arr[i] % 5 != 0)
            cout << arr[i] << " ";
}
