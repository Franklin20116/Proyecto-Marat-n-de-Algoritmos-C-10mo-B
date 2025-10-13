#include 
using namespace std;

int main() {
    int n, prod = 1;
    bool tiene = false;
    cin >> n;
    while (n != 0) {
        if (n % 10 == 5) {
            prod *= 5;
            tiene = true;
        }
        n /= 10;
    }
    cout << (tiene ? prod : 0);
    return 0;
}
