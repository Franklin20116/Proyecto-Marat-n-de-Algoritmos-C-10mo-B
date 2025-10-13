#include 
using namespace std;

int main() {
    int n, prod = 1;
    bool tiene = false;
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if (d < 5) {
            prod *= d;
            tiene = true;
        }
        n /= 10;
    }
    cout << (tiene ? prod : 0);
    return 0;
}
