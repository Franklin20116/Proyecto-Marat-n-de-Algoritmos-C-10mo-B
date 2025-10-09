#include 
using namespace std;

int main() {
    int n, suma = 0, temp;
    cin >> n;
    temp = n;
    while (temp != 0) {
        suma += temp % 10;
        temp /= 10;
    }
    cout << (n % suma == 0 ? "Divisible por suma de dígitos" : "No divisible");
    return 0;
}
