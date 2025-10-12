#include 
using namespace std;

int main() {
    int n, prev = 10, actual;
    bool creciente = true;
    cin >> n;
    while (n != 0) {
        actual = n % 10;
        if (actual >= prev) {
            creciente = false;
            break;
        }
        prev = actual;
        n /= 10;
    }
    cout << (creciente ? "Orden creciente" : "No creciente");
    return 0;
}
