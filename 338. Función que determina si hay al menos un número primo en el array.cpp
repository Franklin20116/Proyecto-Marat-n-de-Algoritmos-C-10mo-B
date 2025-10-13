#include 
using namespace std;

bool esPrimo(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}

bool contienePrimo(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (esPrimo(arr[i]))
            return true;
    return false;
}

int main() {
    int arr[] = {4, 6, 8, 9, 11};
    int n = 5;
    cout << (contienePrimo(arr, n) ? "Hay al menos un primo" : "No hay primos");
    return 0;
}
