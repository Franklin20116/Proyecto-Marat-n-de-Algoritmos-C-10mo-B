#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool existe(int* arr, int n, int valor) {
    for (int i = 0; i < n; i++)
        if (arr[i] == valor) return true;
    return false;
}

int* generarUnicos(int n) {
    int* arr = new int[n];
    int count = 0;
    srand(time(0));
    while (count < n) {
        int num = rand() % (n * 2);
        if (!existe(arr, count, num)) {
            arr[count++] = num;
        }
    }
    return arr;
}

int main() {
    int n;
    cout << "Cantidad de números únicos: ";
    cin >> n;
    int* arr = generarUnicos(n);
    cout << "Números generados: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    delete[] arr;
    return 0;
}
