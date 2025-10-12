#include 
using namespace std;

int main() {
    int n;
    bool cumple = false;
    cin >> n;
    while (n != 0) {
        if (n % 10 > 7) {
            cumple = true;
            break;
        }
        n /= 10;
    }
    cout << (cumple ? "Tiene dígito > 7" : "No tiene");
    return 0;
}
