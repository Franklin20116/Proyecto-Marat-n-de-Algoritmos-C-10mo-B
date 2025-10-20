#include <iostream>
using namespace std;

int main() {
    int* p = new int;
    cout << "Ingrese un número entero: ";
    cin >> *p;

    if (*p % 2 == 0)
        cout << "Doble del número par: " << (*p * 2) << endl;
    else
        cout << "El número no es par." << endl;

    delete p;
    return 0;
}
