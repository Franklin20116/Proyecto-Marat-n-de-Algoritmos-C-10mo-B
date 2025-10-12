#include 
using namespace std;

int main() {
    int n, freq[10] = {0};
    cin >> n;
    while (n != 0) {
        freq[n % 10]++;
        n /= 10;
    }
    bool cumple = false;
    for (int i = 0; i < 10; i++) {
        if (freq[i] >= 2) {
            cumple = true;
            break;
        }
    }
    cout << (cumple ? "Tiene dígitos iguales no consecutivos" : "No tiene");
    return 0;
}
