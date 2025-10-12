#include 
using namespace std;

int main() {
    int n, temp, count = 0;
    cin >> n;
    temp = n;
    do {
        count++;
        temp /= 10;
    } while (temp != 0);
    cout << (n % count == 0 ? "Divisible por cantidad de dígitos" : "No divisible");
    return 0;
}
