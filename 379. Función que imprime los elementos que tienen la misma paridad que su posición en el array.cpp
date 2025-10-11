#include 
using namespace std;

void imprimirParidadCoincidente(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool parElemento = arr[i] % 2 == 0;
        bool parIndice = i % 2 == 0;
        if (parElemento == parIndice)
            cout << arr[i] << " ";
    }
}
