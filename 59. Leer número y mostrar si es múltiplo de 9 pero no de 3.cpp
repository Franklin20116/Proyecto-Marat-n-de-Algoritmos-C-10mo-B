#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n % 9 == 0 && n % 3 != 0) ? "Múltiplo de 9 pero no de 3" : "No cumple");
    return 0;
}
