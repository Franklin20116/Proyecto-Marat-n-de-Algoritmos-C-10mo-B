#include 
using namespace std;

int main() {
    int n, d, freq[10] = {0};
    cin >> n;
    bool todosUnicos = true;
    while (n != 0) {
        d = n % 10;
        freq[d]++;
        if (freq[d] > 1) {
            todosUnicos = false;
            break;
        }
        n /= 10;
    }
    cout << (todosUnicos ? "Todos distintos" : "Hay repetidos");
    return 0;
}
