#include 
using namespace std;

int main() {
    int n, contador = 0;
    cin >> n;
    do {
        contador++;
        n /= 10;
    } while (n != 0);
    cout << contador;
    return 0;
}
