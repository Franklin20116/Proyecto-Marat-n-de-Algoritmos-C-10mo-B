#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ultima = n % 10;
    cout << (ultima % 2 == 0 ? "Termina en cifra par" : "Termina en cifra impar");
    return 0;
}
