#include 
using namespace std;

bool todosPares(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 != 0)
            return false;
    return true;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5;
    cout << (todosPares(arr, n) ? "Todos son pares" : "Hay impares");
    return 0;
}
