#include 
using namespace std;

int main() {
    int n;
    bool tieneCero = false;
    cin >> n;
    while (n != 0) {
        if (n % 10 == 0) {
            tieneCero = true;
            break;
        }
        n /= 10;
    }
    cout << (tieneCero ? "Contiene cero" : "No contiene cero");
    return 0;
}
