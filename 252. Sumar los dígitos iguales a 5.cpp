#include 
using namespace std;

int main() {
    int n, suma = 0;
    cin >> n;
    while (n != 0) {
        if (n % 10 == 5) suma += 5;
        n /= 10;
    }
    cout << suma;
    return 0;
}
