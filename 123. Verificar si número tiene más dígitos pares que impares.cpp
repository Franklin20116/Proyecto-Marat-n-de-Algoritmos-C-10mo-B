#include 
using namespace std;

int main() {
    int n, pares = 0, impares = 0;
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if (d % 2 == 0) pares++;
        else impares++;
        n /= 10;
    }
    cout << (pares > impares ? "Más pares" : "No más pares");
    return 0;
}
