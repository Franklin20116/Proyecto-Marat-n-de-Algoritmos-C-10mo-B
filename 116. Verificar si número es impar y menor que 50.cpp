#include 
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n % 2 != 0 && n < 50) ? "Cumple condición" : "No cumple");
    return 0;
}
