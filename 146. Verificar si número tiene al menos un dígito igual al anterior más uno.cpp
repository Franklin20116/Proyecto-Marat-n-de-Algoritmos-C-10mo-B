#include 
using namespace std;

int main() {
    int n, prev = -1;
    bool cumple = false;
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if (prev != -1 && d == prev + 1) {
            cumple = true;
            break;
        }
        prev = d;
        n /= 10;
    }
    cout << (cumple ? "Dígito igual al anterior +1" : "No cumple");
    return 0;
}
