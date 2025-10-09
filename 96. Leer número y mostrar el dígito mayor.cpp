#include <iostream>
using namespace std;

int main() {
    int n, maximo = 0;
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if (d > maximo) maximo = d;
        n /= 10;
    }
    cout << maximo;
    return 0;
}
