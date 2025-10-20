#include <iostream>
using namespace std;

int* multiplosDeTres(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++) arr[i] = 3 * (i + 1);
    return arr;
}

int main() {
    int n;
    cout << "Cantidad de múltiplos: ";
    cin >> n;
    int* arr = multiplosDeTres(n);
    cout << "Múltiplos de 3: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    delete[] arr;
    return 0;
}
