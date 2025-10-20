#include <iostream>
#include <cstring>
using namespace std;

void intercambiar(char*& a, char*& b) {
    char* temp = a;
    a = b;
    b = temp;
}

int main() {
    char cad1[100], cad2[100];
    cout << "Ingrese primera cadena: ";
    cin.getline(cad1, 100);
    cout << "Ingrese segunda cadena: ";
    cin.getline(cad2, 100);
    char* ptr1 = new char[strlen(cad1) + 1];
    char* ptr2 = new char[strlen(cad2) + 1];
    strcpy(ptr1, cad1);
    strcpy(ptr2, cad2);
    intercambiar(ptr1, ptr2);
    cout << "Después del intercambio:\nCadena 1: " << ptr1 << "\nCadena 2: " << ptr2 << endl;
    delete[] ptr1;
    delete[] ptr2;
    return 0;
}
