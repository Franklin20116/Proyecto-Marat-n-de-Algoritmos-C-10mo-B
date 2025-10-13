#include 
using namespace std;

void imprimirFueraDe20y80(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (arr[i] < 20 || arr[i] > 80)
            cout << arr[i] << " ";
}
