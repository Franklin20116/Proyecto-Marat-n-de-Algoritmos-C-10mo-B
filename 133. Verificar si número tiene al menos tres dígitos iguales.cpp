#include 
using namespace std;

int main() {
    int n, d, freq[10] = {0};
    cin >> n;
    while (n != 0) {
        d = n % 10;
        freq[d]++;
        n /= 10;
    }
    bool tresIguales = false;
    for (int i = 0; i < 10; i++) {
        if (freq[i] >= 3) {
            tresIguales = true;
            break;
        }
    }
    cout << (tresIguales ? "Tiene al menos tres iguales" : "No tiene tres iguales");
    return 0;
}
