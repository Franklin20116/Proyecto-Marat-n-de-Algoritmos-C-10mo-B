#include <iostream>
using namespace std;

int main() {
    int n, digito;
    bool todosPares = true;
    cin >> n;
    while (n != 0) {
        digito = n % 10;
        if (digito % 2 != 0) {
            todosPares = false;
            break;
        }
        n /= 10;
    }
    cout << (todosPares ? "Todos pares" : "Hay impares");
    return 0;
}
