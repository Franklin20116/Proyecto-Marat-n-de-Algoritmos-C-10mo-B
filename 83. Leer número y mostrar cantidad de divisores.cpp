#include 
using namespace std;

int main() {
    int n, contador = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) contador++;
    }
    cout << contador;
    return 0;
}
