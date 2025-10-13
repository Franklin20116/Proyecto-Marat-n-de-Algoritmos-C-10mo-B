#include 
using namespace std;

void imprimirMayores100(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (arr[i] > 100)
            cout << arr[i] << " ";
}
