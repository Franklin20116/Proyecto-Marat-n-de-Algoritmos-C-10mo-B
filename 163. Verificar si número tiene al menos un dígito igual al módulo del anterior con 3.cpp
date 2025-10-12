#include 
using namespace std;

int main() {
    int n, prev = -1;
    bool cumple = false;
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if (prev != -1 && d == prev % 3) {
            cumple = true;
            break;
        }
        prev = d;
        n /= 10;
    }
    cout << (cumple ? "Dígito igual a módulo 3 del anterior" : "No cumple");
    return 0;
}
