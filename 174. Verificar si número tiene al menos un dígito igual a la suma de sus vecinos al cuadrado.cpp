#include 
using namespace std;

int main() {
    int n;
    int d1, d2, d3;
    bool cumple = false;
    cin >> n;
    while (n >= 100) {
        d1 = n % 10;
        d2 = (n / 10) % 10;
        d3 = (n / 100) % 10;
        if (d2 == (d1 + d3) * (d1 + d3)) {
            cumple = true;
            break;
        }
        n /= 10;
    }
    cout << (cumple ? "Cumple condición" : "No cumple");
    return 0;
}
