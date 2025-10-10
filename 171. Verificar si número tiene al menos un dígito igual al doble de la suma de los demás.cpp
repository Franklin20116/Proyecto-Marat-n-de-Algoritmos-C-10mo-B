#include 
using namespace std;

int main() {
    int n, temp, suma = 0, cumple = 0;
    cin >> n;
    temp = n;
    while (temp != 0) {
        suma += temp % 10;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        int d = temp % 10;
        if (d == 2 * (suma - d)) {
            cumple = 1;
            break;
        }
        temp /= 10;
    }
    cout << (cumple ? "Cumple condición" : "No cumple");
    return 0;
}
