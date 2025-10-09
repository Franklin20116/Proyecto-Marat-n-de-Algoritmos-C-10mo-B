#include <iostream>
using namespace std;

int main() {
    int n, temp, suma = 0;
    cin >> n;
    temp = n;
    while (temp != 0) {
        int d = temp % 10;
        if (d % 2 == 0) suma += d;
        temp /= 10;
    }
    cout << (suma != 0 && n % suma == 0 ? "Divisible por suma de pares" : "No divisible");
    return 0;
}
