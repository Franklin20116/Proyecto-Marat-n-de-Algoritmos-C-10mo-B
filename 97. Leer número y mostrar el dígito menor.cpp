#include <iostream>
using namespace std;

int main() {
    int n, minimo = 9;
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if (d < minimo) minimo = d;
        n /= 10;
    }
    cout << minimo;
    return 0;
}
