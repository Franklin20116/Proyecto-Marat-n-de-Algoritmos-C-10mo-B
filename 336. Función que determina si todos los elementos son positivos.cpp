#include 
using namespace std;

bool todosPositivos(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (arr[i] < 0)
            return false;
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    cout << (todosPositivos(arr, n) ? "Todos son positivos" : "Hay negativos");
    return 0;
}
