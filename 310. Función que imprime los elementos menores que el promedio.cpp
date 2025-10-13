#include 
using namespace std;

float promedio(int arr[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) suma += arr[i];
    return suma / n;
}
