#include 
using namespace std;

int main() {
    int n, suma = 0;
    cin >> n;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) suma += i;
    }
    cout << (suma == n ? "Perfecto" : "No perfecto");
    return 0;
}
