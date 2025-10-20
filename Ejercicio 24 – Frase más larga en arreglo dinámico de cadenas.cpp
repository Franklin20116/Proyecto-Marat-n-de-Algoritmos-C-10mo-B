#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de frases: ";
    cin >> n;
    cin.ignore();
    char** frases = new char*[n];
    int maxLen = 0, indiceMax = 0;

    for (int i = 0; i < n; i++) {
        char temp[200];
        cout << "Frase " << i + 1 << ": ";
        cin.getline(temp, 200);
        frases[i] = new char[strlen(temp) + 1];
        strcpy(frases[i], temp);
        if (strlen(temp) > maxLen) {
            maxLen = strlen(temp);
            indiceMax = i;
        }
    }

    cout << "La frase más larga es:\n" << frases[indiceMax] << endl;

    for (int i = 0; i < n; i++) delete[] frases[i];
    delete[] frases;
    return 0;
}
