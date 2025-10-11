#include 
using namespace std;

void imprimirPromedioExcluyendo(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) total += arr[i];
    for (int i = 0; i < n; i++)
        if (arr[i] == (total - arr[i]) / (n - 1))
            cout << arr[i] << " ";
}
