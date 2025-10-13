#include 
using namespace std;

int main() {
    int n, freq[10] = {0}, count = 0;
    cin >> n;
    while (n != 0) {
        freq[n % 10]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
        if (freq[i] > 0) count++;
    cout << count;
    return 0;
}
