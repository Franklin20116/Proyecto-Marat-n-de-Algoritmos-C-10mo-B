#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n > 0) cout << "Positivo";
    else if (n < 0) cout << "Negativo";
    else cout << "Cero";
    return 0;
}
