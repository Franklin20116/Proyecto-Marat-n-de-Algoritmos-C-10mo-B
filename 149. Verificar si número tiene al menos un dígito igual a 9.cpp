#include 
using namespace std;

int main() {
    int n;
    bool contieneNueve = false;
    cin >> n;
    while (n != 0) {
        if (n % 10 == 9) {
            contieneNueve = true;
            break;
        }
        n /= 10;
    }
    cout << (contieneNueve ? "Contiene 9" : "No contiene 9");
    return 0;
}
