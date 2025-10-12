#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n % 2 == 0 && n % 3 == 0) ? "Divisible por 2 y 3" : "No divisible");
    return 0;
}
