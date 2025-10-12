#include 
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
        if (freq[i] >= 2) {
            repetido = true;
            break;
        }
    }
    cout << (repetido ? "Tiene dígitos repetidos" : "Todos diferentes");
    return 0;
}
