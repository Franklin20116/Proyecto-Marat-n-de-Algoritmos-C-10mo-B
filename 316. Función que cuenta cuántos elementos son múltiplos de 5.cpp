#include 
using namespace std;

int contarMultiplos5(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 5 == 0) count++;
    return count;
}
