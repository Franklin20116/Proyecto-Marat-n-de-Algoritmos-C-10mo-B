#include <iostream>
using namespace std;

int main() {
    int n;
    bool contiene7 = false;
    cin >> n;
    while (n != 0) {
        if (n % 10 == 7) {
            contiene7 = true;
            break;
        }
        n /= 10;
    }
    cout << (contiene7 ? "Contiene 7" : "No contiene 7");
    return 0;
}
