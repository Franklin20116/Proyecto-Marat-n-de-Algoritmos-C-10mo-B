#include 
using namespace std;

int contarMultiplos3(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 3 == 0) count++;
    return count;
}
