#include <iostream>
using namespace std;

int main() {
    int n, temp, primer;
    cin >> n;
    temp = n;
    while (temp >= 10) temp /= 10;
    primer = temp;
    cout << (primer != 0 && n % primer == 0 ? "Múltiplo del primer dígito" : "No múltiplo");
    return 0;
}
