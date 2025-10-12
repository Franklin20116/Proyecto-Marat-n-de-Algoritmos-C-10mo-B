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
    cout << (impares > pares ? "Más impares" : "No más impares");
    return 0;
}
