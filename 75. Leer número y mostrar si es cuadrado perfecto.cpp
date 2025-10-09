#include 
#include 
using namespace std;

int main() {
    int n;
    cin >> n;
    int raiz = sqrt(n);
    cout << (raiz * raiz == n ? "Cuadrado perfecto" : "No perfecto");
    return 0;
}
