#include 
using namespace std;

int main() {
    int n, temp, suma = 0;
    bool cumple = false;
    cin >> n;
    temp = n;
    while (temp != 0) {
        int d = temp % 10;
        if (d % 2 == 0) suma += d;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        if (temp % 10 == suma) {
            cumple = true;
            break;
        }
        temp /= 10;
    }
    cout << (cumple ? "Cumple condición" : "No cumple");
    return 0;
}
