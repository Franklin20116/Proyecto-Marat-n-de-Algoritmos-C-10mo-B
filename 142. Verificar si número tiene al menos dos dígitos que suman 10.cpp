#include 
using namespace std;

int main() {
    int n, d1, d2;
    bool cumple = false;
    cin >> n;
    while (n >= 10) {
        d1 = n % 10;
        d2 = (n / 10) % 10;
        if (d1 + d2 == 10) {
            cumple = true;
            break;
        }
        n /= 10;
    }
    cout << (cumple ? "Dos dígitos suman 10" : "No cumple");
    return 0;
}
