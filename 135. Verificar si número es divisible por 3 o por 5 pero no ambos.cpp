#include 
using namespace std;

int main() {
    int n;
    cin >> n;
    bool div3 = n % 3 == 0;
    bool div5 = n % 5 == 0;
    cout << ((div3 ^ div5) ? "Divisible por 3 o 5 pero no ambos" : "No cumple");
    return 0;
}
