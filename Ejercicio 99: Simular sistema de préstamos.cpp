#include <iostream>
using namespace std;

struct Prestamo {
    char nombre[50];
    float monto;
    float tasa; // porcentaje
};

int main() {
    int n;
    cout << "Cantidad de préstamos: ";
    cin >> n;
    cin.ignore();

    Prestamo* lista = new Prestamo[n];
    float totalInteres = 0;

    for (int i = 0; i < n; i++) {
        cout << "Nombre: ";
        cin.getline(lista[i].nombre, 50);
        cout << "Monto: ";
        cin >> lista[i].monto;
        cout << "Tasa (%): ";
        cin >> lista[i].tasa;
        cin.ignore();
        totalInteres += lista[i].monto * (lista[i].tasa / 100);
    }

    cout << "\nInterés total acumulado: $" << totalInteres << endl;
    delete[] lista;
    return 0;
}
