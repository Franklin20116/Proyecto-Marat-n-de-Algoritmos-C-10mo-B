#include 
using namespace std;

int main() {
    int n, freq[10] = {0}, prod = 1;
    bool tiene = false;
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        freq[d]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
        if (freq[i] == 1) {
            prod *= i;
            tiene = true;
        }
    cout << (tiene ? prod : 0);
    return 0;
}
