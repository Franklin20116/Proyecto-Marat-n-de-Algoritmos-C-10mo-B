#include 
using namespace std;

int main() {
    int n;
    cin >> n;
    bool esPotencia = (n > 0) && ((n & (n - 1)) == 0);
    cout << (esPotencia ? "Potencia de 2" : "No potencia");
    return 0;
}
