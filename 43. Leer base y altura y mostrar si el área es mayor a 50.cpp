#include <iostream>
using namespace std;

int main() {
    double base, altura;
    cin >> base >> altura;
    double area = (base * altura) / 2;
    cout << (area > 50 ? "Área > 50" : "Área ≤ 50");
    return 0;
}
