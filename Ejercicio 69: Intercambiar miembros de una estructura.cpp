
#include <iostream>
using namespace std;

struct Punto {
    int x, y;
};

void intercambiar(Punto* a, Punto* b) {
    Punto temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    Punto p1 = {1, 2}, p2 = {3, 4};
    intercambiar(&p1, &p2);
    cout << "Punto 1: (" << p1.x << ", " << p1.y << ")\n";
    cout << "Punto 2: (" << p2.x << ", " << p2.y << ")\n";
    return 0;
}
