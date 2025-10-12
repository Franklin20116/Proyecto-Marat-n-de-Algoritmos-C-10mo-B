#include 
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n % 6 == 0 && n > 100) ? "Cumple condición" : "No cumple");
    return 0;
}
