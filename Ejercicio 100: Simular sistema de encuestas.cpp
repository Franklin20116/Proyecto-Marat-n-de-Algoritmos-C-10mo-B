#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de encuestados: ";
    cin >> n;

    char* respuestas = new char[n];
    int si = 0, no = 0;

    for (int i = 0; i < n; i++) {
        cout << "Respuesta #" << i + 1 << " (s/n): ";
        cin >> respuestas[i];
        if (respuestas[i] == 's' || respuestas[i] == 'S') si++;
        else if (respuestas[i] == 'n' || respuestas[i] == 'N') no++;
    }

    cout << "\nSí: " << (si * 100.0 / n) << "%\n";
    cout << "No: " << (no * 100.0 / n) << "%\n";

    delete[] respuestas;
    return 0;
}
