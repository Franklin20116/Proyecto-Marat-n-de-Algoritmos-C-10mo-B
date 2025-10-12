#include 
using namespace std;

int main() {
    int n, ult;
    cin >> n;
    ult = n % 10;
    cout << (ult != 0 && n % ult == 0 ? "Divisible por último dígito" : "No divisible");
    return 0;
}
