#include 
using namespace std;

void imprimirCoincidenConSumaEspejo(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int suma = arr[i] + arr[n - 1 - i];
        if (arr[i] == suma || arr[n - 1 - i] == suma)
            cout << arr[i] << " " << arr[n - 1 - i] << " ";
    }
}
