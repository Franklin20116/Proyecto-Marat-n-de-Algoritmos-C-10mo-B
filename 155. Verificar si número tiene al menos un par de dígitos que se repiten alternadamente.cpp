#include 
using namespace std;

int main() {
    int n, prev = -1, alterna = -1;
    bool cumple = false;
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if (d == alterna && d != prev) {
            cumple = true;
            break;
        }
        alterna = prev;
        prev = d;
        n /= 10;
    }
    cout << (cumple ? "Repetición alternada" : "No cumple");
    return 0;
}
