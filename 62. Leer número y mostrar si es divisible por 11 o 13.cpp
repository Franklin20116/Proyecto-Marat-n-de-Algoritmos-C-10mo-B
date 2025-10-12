#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n % 11 == 0 || n % 13 == 0) ? "Divisible por 11 o 13" : "No divisible");
    return 0;
}
