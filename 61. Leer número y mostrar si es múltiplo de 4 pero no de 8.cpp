#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n % 4 == 0 && n % 8 != 0) ? "Múltiplo de 4 pero no de 8" : "No cumple");
    return 0;
}
