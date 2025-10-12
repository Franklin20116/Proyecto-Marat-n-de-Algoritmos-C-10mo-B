#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n % 6 == 0 && n > 100) ? "Múltiplo de 6 y > 100" : "No cumple");
    return 0;
}
