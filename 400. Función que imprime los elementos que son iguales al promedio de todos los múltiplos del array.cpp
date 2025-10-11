#include 
using namespace std;

void imprimirPromedioMultiplosTotales(int arr[], int n) {
    int suma = 0, count = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i != j && arr[j] != 0 && arr[i] % arr[j] == 0) {
                suma += arr[i];
                count++;
                break;
            }
    if (count == 0) return;
    int prom = suma / count;
    for (int i = 0; i < n; i++)
        if (arr[i] == prom)
            cout << arr[i] << " ";
}
