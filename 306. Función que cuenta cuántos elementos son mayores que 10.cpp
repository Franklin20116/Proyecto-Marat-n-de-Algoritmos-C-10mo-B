#include 
using namespace std;

int contarMayores10(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] > 10) count++;
    return count;
}
