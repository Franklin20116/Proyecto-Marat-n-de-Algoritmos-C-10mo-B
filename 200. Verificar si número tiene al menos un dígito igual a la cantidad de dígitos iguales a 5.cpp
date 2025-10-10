#include 
using namespace std;

int main() {
    int n, temp, count = 0;
    cin >> n;
    temp = n;
    while (temp != 0) {
        if (temp % 10 == 5) count++;
        temp /= 10;
    }
    temp = n;
    bool cumple = false;
    while (temp != 0) {
        if (temp % 10 == count) {
            cumple = true;
            break;
        }
        temp /= 10;
    }
    cout << (cumple ? "Cumple condición" : "No cumple");
    return 0;
}
