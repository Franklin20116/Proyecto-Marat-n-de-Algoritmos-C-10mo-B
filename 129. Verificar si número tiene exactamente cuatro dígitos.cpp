#include 
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    do {
        count++;
        n /= 10;
    } while (n != 0);
    cout << (count == 4 ? "Cuatro dígitos" : "No tiene cuatro dígitos");
    return 0;
}
