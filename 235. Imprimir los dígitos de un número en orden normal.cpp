#include 
using namespace std;

int main() {
    int n, d[10], c = 0;
    cin >> n;
    while (n != 0) {
        d[c++] = n % 10;
        n /= 10;
    }
    for (int i = c - 1; i >= 0; i--)
        cout << d[i] << " ";
    return 0;
}
