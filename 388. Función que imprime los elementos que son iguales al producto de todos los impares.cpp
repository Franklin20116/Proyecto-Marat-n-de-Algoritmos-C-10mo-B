#include 
using namespace std;

void imprimirIgualesProductoImpares(int arr[], int n) {
    int prod = 1;
    bool tiene = false;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 != 0) {
            prod *= arr[i];
            tiene = true;
        }
    if (!tiene) return;
    for (int i = 0; i < n; i++)
        if (arr[i] == prod)
            cout << arr[i] << " ";
}
