#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de múltiplos: ";
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        arr[i] = 3 * (i + 1);

    cout << "Múltiplos de 3: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
