#include 
using namespace std;

int main() {
    int n, pares = 0;
    cin >> n;
    while (n != 0) {
        if ((n % 10) % 2 == 0) pares++;
        n /= 10;
    }
    cout << (pares > 3 ? "Más de tres pares" : "Tres o menos pares");
    return 0;
}
