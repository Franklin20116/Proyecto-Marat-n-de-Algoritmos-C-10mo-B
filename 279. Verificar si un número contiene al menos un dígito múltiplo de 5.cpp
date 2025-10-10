#include 
using namespace std;

int main() {
    int n;
    bool cumple = false;
    cin >> n;
    while (n != 0) {
        if ((n % 10) % 5 == 0) {
            cumple = true;
            break;
        }
        n /= 10;
    }
    cout << (cumple ? "Contiene múltiplo de 5" : "No contiene");
    return 0;
}
