#include 
using namespace std;

void imprimirPromedioSiguientes(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int suma = 0, count = 0;
        for (int j = i + 1; j < n; j++) {
            suma += arr[j];
            count++;
        }
        if (count > 0 && arr[i] == suma / count)
            cout << arr[i] << " ";
    }
}
