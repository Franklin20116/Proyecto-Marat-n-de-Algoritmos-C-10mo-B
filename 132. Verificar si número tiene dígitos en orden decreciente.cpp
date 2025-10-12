#include 
using namespace std;

int main() {
    int n, prev = -1, actual;
    bool decreciente = true;
    cin >> n;
    while (n != 0) {
        actual = n % 10;
        if (actual <= prev) {
            decreciente = false;
            break;
        }
        prev = actual;
        n /= 10;
    }
    cout << (decreciente ? "Orden decreciente" : "No decreciente");
    return 0;
}
