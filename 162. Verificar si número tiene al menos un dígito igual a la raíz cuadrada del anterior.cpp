#include 
#include 
using namespace std;

int main() {
    int n, prev = -1;
    bool cumple = false;
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if (prev != -1 && d == sqrt(prev)) {
            cumple = true;
            break;
        }
        prev = d;
        n /= 10;
    }
    cout << (cumple ? "Dígito igual a raíz del anterior" : "No cumple");
    return 0;
}
