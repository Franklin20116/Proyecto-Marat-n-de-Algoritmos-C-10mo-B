#include 
using namespace std;

int main() {
    int n, prev = -1;
    bool consecutivos = false;
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if (d % 2 != 0 && prev % 2 != 0) {
            consecutivos = true;
            break;
        }
        prev = d;
        n /= 10;
    }
    cout << (consecutivos ? "Tiene impares consecutivos" : "No tiene");
    return 0;
}
