#include 
using namespace std;

void imprimirPromedioImpares(int arr[], int n) {
    int suma = 0, count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 != 0) {
            suma += arr[i];
            count++;
        }
    if (count == 0) return;
    int prom = suma / count;
    for (int i = 0; i < n; i++)
        if (arr[i] == prom)
            cout << arr[i] << " ";
}
