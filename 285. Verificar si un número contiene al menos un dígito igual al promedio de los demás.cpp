#include 
using namespace std;

int main() {
    int n, temp, suma = 0, d[10], c = 0;
    cin >> n;
    temp = n;
    while (temp != 0) {
        d[c] = temp % 10;
        suma += d[c];
        temp /= 10;
        c++;
    }
    bool cumple = false;
    for (int i = 0; i < c; i++)
        if (c > 1 && d[i] == (suma - d[i]) / (c - 1)) {
            cumple = true;
            break;
        }
    cout << (cumple ? "Cumple condición" : "No cumple");
    return 0;
}
