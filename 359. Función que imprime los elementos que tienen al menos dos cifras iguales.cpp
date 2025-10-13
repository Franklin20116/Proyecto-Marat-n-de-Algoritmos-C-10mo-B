#include 
using namespace std;

bool tieneCifrasIguales(int x) {
    int digitos[10] = {0};
    while (x > 0) {
        int d = x % 10;
        digitos[d]++;
        if (digitos[d] >= 2) return true;
        x /= 10;
    }
    return false;
}

void imprimirCifrasRepetidas(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (tieneCifrasIguales(arr[i]))
            cout << arr[i] << " ";
}
