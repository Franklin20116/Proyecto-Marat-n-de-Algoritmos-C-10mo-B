#include 
using namespace std;

int main() {
    int n, i, esPrimo = 1;
    cin >> n;
    if (n <= 1) esPrimo = 0;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            esPrimo = 0;
            break;
        }
    }
    cout << (esPrimo ? "Primo" : "No primo");
    return 0;
}
