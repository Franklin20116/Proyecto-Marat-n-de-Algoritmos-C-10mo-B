#include 
using namespace std;

int main() {
    int n, freq[10] = {0}, suma = 0;
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        freq[d]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
        if (freq[i] == 1) suma += i;
    cout << suma;
    return 0;
}
