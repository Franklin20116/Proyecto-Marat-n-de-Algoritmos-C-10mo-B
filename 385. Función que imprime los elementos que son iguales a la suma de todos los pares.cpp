#include 
using namespace std;

void imprimirIgualesSumaPares(int arr[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0) suma += arr[i];
    for (int i = 0; i < n; i++)
        if (arr[i] == suma)
            cout << arr[i] << " ";
}
