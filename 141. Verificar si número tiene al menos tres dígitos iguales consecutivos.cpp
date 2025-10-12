#include 
using namespace std;

int main() {
    int n, prev = -1, count = 1;
    bool cumple = false;
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if (d == prev) {
            count++;
            if (count == 3) {
                cumple = true;
                break;
            }
        } else {
            count = 1;
        }
        prev = d;
        n /= 10;
    }
    cout << (cumple ? "Tres iguales consecutivos" : "No cumple");
    return 0;
}
