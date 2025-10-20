#include <iostream>
using namespace std;

void rotar(int* a, int* b, int* c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int x, y, z;
    cout << "Ingrese tres valores: ";
    cin >> x >> y >> z;
    rotar(&x, &y, &z);
    cout << "Después de rotar: " << x << " " << y << " " << z << endl;
    return 0;
}
