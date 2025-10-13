#include 
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if (d % 2 == 0 && d % 3 == 0 && d % 5 == 0) count++;
        n /= 10;
    }
    cout << count;
    return 0;
}
