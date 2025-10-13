#include 
using namespace std;

bool contiene(int arr[], int n, int valor) {
    for (int i = 0; i < n; i++)
        if (arr[i] == valor)
            return true;
    return false;
}

int main() {
    int arr[] = {4, 7, 2, 9, 5};
    int n = 5, valor;
    cin >> valor;
    cout << (contiene(arr, n, valor) ? "Sí está presente" : "No está presente");
    return 0;
}
