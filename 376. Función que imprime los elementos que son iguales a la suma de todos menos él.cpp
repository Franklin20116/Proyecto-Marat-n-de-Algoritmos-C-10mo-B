#include 
using namespace std;

void imprimirSumaExcluyendo(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) total += arr[i];
    for (int i = 0; i < n; i++)
        if (arr[i] == total - arr[i])
            cout << arr[i] << " ";
}
