#include 
using namespace std;

int main() {
    int n;
    cin >> n;
    int ult = n % 10;
    cout << (ult % 2 == 0 ? "Termina en cifra par" : "Termina en cifra impar");
    return 0;
}
