#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n % 4 == 0 || n % 6 == 0) ? "Divisible por 4 o 6" : "No divisible");
    return 0;
}
