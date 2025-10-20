#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de estudiantes: ";
    cin >> n;
    cin.ignore();
    char** nombres = new char*[n];
    for (int i = 0; i < n; i++) {
        char temp[100];
        cout << "Nombre del estudiante " << i + 1 << ": ";
        cin.getline(temp, 100);
        nombres[i] = new char[strlen(temp) + 1];
        strcpy(nombres[i], temp);
    }
    cout << "Lista de nombres:\n";
    for (int i = 0; i < n; i++) {
        cout << nombres[i] << endl;
        delete[] nombres[i];
    }
    delete[] nombres;
    return 0;
}
