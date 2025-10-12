#include 
using namespace std;

int main() {
    int n, temp, primero;
    cin >> n;
    temp = n;
    while (temp >= 10) temp /= 10;
    primero = temp;
    cout << (primero != 0 && n % primero == 0 ? "Divisible por primer dígito" : "No divisible");
    return 0;
}
