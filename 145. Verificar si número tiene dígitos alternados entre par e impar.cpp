#include 
using namespace std;

int main() {
    int n, prev = -1;
    bool alternado = true;
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if (prev != -1 && (d % 2 == prev % 2)) {
            alternado = false;
            break;
        }
        prev = d;
        n /= 10;
    }
    cout << (alternado ? "Alternancia par-impar" : "No alternado");
    return 0;
}
