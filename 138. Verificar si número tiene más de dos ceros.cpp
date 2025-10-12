#include 
using namespace std;

int main() {
    int n, ceros = 0;
    cin >> n;
    while (n != 0) {
        if (n % 10 == 0) ceros++;
        n /= 10;
    }
    cout << (ceros > 2 ? "Más de dos ceros" : "Dos o menos ceros");
    return 0;
}
