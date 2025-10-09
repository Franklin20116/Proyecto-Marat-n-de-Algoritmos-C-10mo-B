#include <iostream>
using namespace std;

int main() {
    int n, d, freq[10] = {0};
    cin >> n;
    while (n != 0) {
        d = n % 10;
        freq[d]++;
        n /= 10;
    }
    bool repetido = false;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 1) {
            repetido = true;
            break;
        }
    }
    cout << (repetido ? "Tiene repetidos" : "Todos únicos");
    return 0;
}
