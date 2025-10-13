#include 
using namespace std;

int contarApariciones(int arr[], int n, int valor) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == valor)
            count++;
    return count;
}

int main() {
    int arr[] = {3, 5, 3, 8, 3};
    int n = 5, valor;
    cin >> valor;
    cout << "Aparece " << contarApariciones(arr, n, valor) << " veces.";
    return 0;
}
