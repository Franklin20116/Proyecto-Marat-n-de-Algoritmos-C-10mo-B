#include 
using namespace std;

int main() {
    int n, original, reverso = 0;
    cin >> n;
    original = n;
    while (n != 0) {
        reverso = reverso * 10 + n % 10;
        n /= 10;
    }
    cout << (original == reverso ? "Capicúa" : "No capicúa");
    return 0;
}
