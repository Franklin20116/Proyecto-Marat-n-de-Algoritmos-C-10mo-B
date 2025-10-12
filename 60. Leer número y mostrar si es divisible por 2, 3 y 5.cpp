#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n % 2 == 0 && n % 3 == 0 && n % 5 == 0) ? "Divisible por 2, 3 y 5" : "No divisible");
    return 0;
}
