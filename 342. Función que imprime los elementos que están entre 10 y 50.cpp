#include 
using namespace std;

void imprimirEntre10y50(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (arr[i] >= 10 && arr[i] <= 50)
            cout << arr[i] << " ";
}
