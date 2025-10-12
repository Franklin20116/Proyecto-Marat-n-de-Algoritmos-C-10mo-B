#include 
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n % 7 == 0 && n > 50) ? "Cumple condición" : "No cumple");
    return 0;
}
