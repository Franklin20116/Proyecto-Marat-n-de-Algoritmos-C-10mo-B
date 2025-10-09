#include <iostream>
using namespace std;

int main() {
    int n, digito;
    bool todosImpares = true;
    cin >> n;
    while (n != 0) {
        digito = n % 10;
        if (digito % 2 == 0) {
            todosImpares = false;
            break;
        }
        n /= 10;
    }
    cout << (todosImpares ? "Todos impares" : "Hay pares");
    return 0;
}
