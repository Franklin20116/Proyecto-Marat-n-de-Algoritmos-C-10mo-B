#include 
using namespace std;

int main() {
    int n, d1 = -1, d2 = -1;
    bool cumple = false;
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if (d1 != -1 && d2 != -1 && d == (d1 + d2) / 2) {
            cumple = true;
            break;
        }
        d2 = d1;
        d1 = d;
        n /= 10;
    }
    cout << (cumple ? "Dígito igual a promedio de dos anteriores" : "No cumple");
    return 0;
}
