#include 
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n >= 10 && n <= 99) ? "Dos cifras" : "Fuera de rango");
    return 0;
}
