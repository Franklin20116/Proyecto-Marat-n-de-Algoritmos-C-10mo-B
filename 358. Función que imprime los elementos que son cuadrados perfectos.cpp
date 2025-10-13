#include 
#include 
using namespace std;

bool esCuadradoPerfecto(int x) {
    int raiz = (int)sqrt(x);
    return raiz * raiz == x;
}

void imprimirCuadradosPerfectos(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (esCuadradoPerfecto(arr[i]))
            cout << arr[i] << " ";
}
