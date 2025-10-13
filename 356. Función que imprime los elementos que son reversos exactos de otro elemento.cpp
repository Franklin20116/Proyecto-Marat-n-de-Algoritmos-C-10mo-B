#include 
using namespace std;

int invertirNumero(int x) {
    int rev = 0;
    while (x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev;
}

void imprimirReversos(int arr[], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i != j && arr[i] == invertirNumero(arr[j]))
                cout << arr[i] << " ";
}
