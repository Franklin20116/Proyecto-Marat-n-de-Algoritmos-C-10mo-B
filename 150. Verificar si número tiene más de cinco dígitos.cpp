#include 
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    do {
        count++;
        n /= 10;
    } while (n != 0);
    cout << (count > 5 ? "Más de cinco dígitos" : "Cinco o menos");
    return 0;
}
