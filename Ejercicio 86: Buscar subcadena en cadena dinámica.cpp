#include <iostream>
#include <cstring>
using namespace std;

bool contiene(const char* texto, const char* sub) {
    int lenT = strlen(texto), lenS = strlen(sub);
    for (int i = 0; i <= lenT - lenS; i++) {
        bool coincide = true;
        for (int j = 0; j < lenS; j++) {
            if (texto[i + j] != sub[j]) {
                coincide = false;
                break;
            }
        }
        if (coincide) return true;
    }
    return false;
}

int main() {
    char* texto = new char[100];
    char* sub = new char[50];

    cout << "Texto: ";
    cin.getline(texto, 100);
    cout << "Subcadena: ";
    cin.getline(sub, 50);

    cout << (contiene(texto, sub) ? "Sí contiene" : "No contiene") << endl;

    delete[] texto;
    delete[] sub;
    return 0;
}
