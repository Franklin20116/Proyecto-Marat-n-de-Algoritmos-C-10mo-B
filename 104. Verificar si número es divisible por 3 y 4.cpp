#include 
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n % 3 == 0 && n % 4 == 0) ? "Divisible por 3 y 4" : "No divisible");
    return 0;
}
