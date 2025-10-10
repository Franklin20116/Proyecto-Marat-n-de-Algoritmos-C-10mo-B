#include 
using namespace std;

int main() {
    int n, d[10], c = 0;
    cin >> n;
    while (n != 0) {
        d[c++] = n % 10;
        n /= 10;
    }
    bool cumple = false;
    for (int i = 0; i < c; i++)
        for (int j = 0; j < c; j++)
            if (i != j && d[i] == 3 * d[j])
                cumple = true;
    cout << (cumple ? "Cumple condición" : "No cumple");
    return 0;
}
