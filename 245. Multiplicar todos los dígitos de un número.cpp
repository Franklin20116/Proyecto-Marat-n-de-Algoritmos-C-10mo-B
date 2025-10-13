#include 
using namespace std;

int main() {
    int n, prod = 1;
    cin >> n;
    while (n != 0) {
        prod *= n % 10;
        n /= 10;
    }
    cout << prod;
    return 0;
}
