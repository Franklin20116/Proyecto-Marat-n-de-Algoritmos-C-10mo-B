#include <iostream>
using namespace std;

int main() {
    int n, ultimo;
    cin >> n;
    ultimo = n % 10;
    cout << (ultimo != 0 && n % ultimo == 0 ? "Múltiplo del último dígito" : "No múltiplo");
    return 0;
}
