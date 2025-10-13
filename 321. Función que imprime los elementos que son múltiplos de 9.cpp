#include 
using namespace std;

void imprimirMultiplos9(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (arr[i] % 9 == 0)
            cout << arr[i] << " ";
}
