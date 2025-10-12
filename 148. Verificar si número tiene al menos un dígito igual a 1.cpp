#include 
using namespace std;

int main() {
    int n;
    bool contieneUno = false;
    cin >> n;
    while (n != 0) {
        if (n % 10 == 1) {
            contieneUno = true;
            break;
        }
        n /= 10;
    }
    cout << (contieneUno ? "Contiene 1" : "No contiene 1");
    return 0;
}
