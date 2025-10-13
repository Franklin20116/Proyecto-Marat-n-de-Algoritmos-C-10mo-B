#include 
using namespace std;

int main() {
    int n, prod = 1;
    bool tienePar = false;
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if (d % 2 == 0) {
            prod *= d;
            tienePar = true;
        }
        n /= 10;
    }
    cout << (tienePar ? prod : 0);
    return 0;
}
