#include <iostream>
using namespace std;

bool esPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return false;
    return true;
}

int* generarPrimos(int n) {
    int* arr = new int[n];
    int count = 0, num = 2;
    while (count < n) {
        if (esPrimo(num)) arr[count++] = num;
        num++;
    }
    return arr;
}

int main() {
    int n;
    cout << "Cantidad de primos: ";
    cin >> n;
    int* primos = generarPrimos(n);
    cout << "Primos: ";
    for (int i = 0; i < n; i++) cout << primos[i] << " ";
    cout << endl;
    delete[] primos;
    return 0;
}
