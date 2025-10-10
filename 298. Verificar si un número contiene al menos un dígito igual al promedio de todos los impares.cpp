#include 
using namespace std;

int main() {
    int n, temp, suma = 0, count = 0;
    bool cumple = false;
    cin >> n;
    temp = n;
    while (temp != 0) {
        int d = temp % 10;
        if (d % 2 != 0) {
            suma += d;
            count++;
        }
        temp /= 10;
    }
    if (count == 0) {
        cout << "No cumple";
        return 0;
    }
    int promedio = suma / count;
    temp = n;
    while (temp != 0) {
        if (temp % 10 == promedio) {
            cumple = true;
            break;
        }
        temp /= 10;
    }
    cout << (cumple ? "Cumple condición" : "No cumple");
    return 0;
}
