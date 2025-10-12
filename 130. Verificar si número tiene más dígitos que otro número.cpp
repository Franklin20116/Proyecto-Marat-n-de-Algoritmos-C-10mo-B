#include 
using namespace std;

int contar(int x) {
    int c = 0;
    do {
        c++;
        x /= 10;
    } while (x != 0);
    return c;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << (contar(a) > contar(b) ? "Primer número tiene más dígitos" : "No tiene más dígitos");
    return 0;
}
