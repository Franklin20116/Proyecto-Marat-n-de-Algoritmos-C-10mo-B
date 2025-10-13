#include 
using namespace std;

bool todosMultiplos(int arr[], int n, int m) {
    for (int i = 0; i < n; i++)
        if (arr[i] % m != 0)
            return false;
    return true;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = 4, m;
    cin >> m;
    cout << (todosMultiplos(arr, n, m) ? "Todos son múltiplos de " : "No todos son múltiplos de ") << m;
    return 0;
}
