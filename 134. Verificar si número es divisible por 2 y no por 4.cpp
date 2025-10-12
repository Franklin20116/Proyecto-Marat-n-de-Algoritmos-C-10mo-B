#include 
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n % 2 == 0 && n % 4 != 0) ? "Divisible por 2 pero no por 4" : "No cumple");
    return 0;
}
