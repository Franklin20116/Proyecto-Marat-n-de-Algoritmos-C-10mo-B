#include 
using namespace std;

int main() {
    int n, temp, prod = 1, d[10], c = 0;
    cin >> n;
    temp = n;
    while (temp != 0) {
        d[c] = temp % 10;
        prod *= d[c];
        temp /= 10;
        c++;
    }
    bool cumple = false;
    for (int i = 0; i < c; i++)
        if (d[i] != 0 && d[i] == prod / d[i]) {
            cumple = true;
            break;
        }
    cout << (cumple ? "Cumple condición" : "No cumple");
    return 0;
}
