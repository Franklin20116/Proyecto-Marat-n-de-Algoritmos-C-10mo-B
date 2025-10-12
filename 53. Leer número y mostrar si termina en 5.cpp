#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (n % 10 == 5 ? "Termina en 5" : "No termina en 5");
    return 0;
}
