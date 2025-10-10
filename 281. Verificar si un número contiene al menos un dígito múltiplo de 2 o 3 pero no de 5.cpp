#include 
using namespace std;

int main() {
    int n;
    bool cumple = false;
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if ((d % 2 == 0 || d % 3 == 0) && d % 5 != 0) {
            cumple = true;
            break;
        }
        n /= 10;
    }
    cout << (cumple ? "Cumple condición" : "No cumple");
    return 0;
}
