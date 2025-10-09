#include <iostream>
using namespace std;

int main() {
    int n, impares = 0;
    cin >> n;
    while (n != 0) {
        if ((n % 10) % 2 != 0) impares++;
        n /= 10;
    }
    cout << impares;
    return 0;
}
