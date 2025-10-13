#include 
using namespace std;

int contarMenores5(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] < 5) count++;
    return count;
}
