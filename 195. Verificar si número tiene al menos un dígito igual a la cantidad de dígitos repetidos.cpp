#include 
using namespace std;

int main() {
    int n, freq[10] = {0}, temp, repetidos = 0;
    cin >> n;
    temp = n;
    while (temp != 0) {
        freq[temp % 10]++;
        temp /= 10;
    }
    for (int i = 0; i < 10; i++)
        if (freq[i] > 1) repetidos++;
    temp = n;
    bool cumple = false;
    while (temp != 0) {
        if (temp % 10 == repetidos) {
            cumple = true;
            break;
        }
        temp /= 10;
    }
    cout << (cumple ? "Cumple condición" : "No cumple");
    return 0;
}
