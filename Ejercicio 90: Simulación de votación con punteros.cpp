#include <iostream>
using namespace std;

struct Candidato {
    char nombre[30];
    int votos;
};

int main() {
    int n;
    cout << "Número de votantes: ";
    cin >> n;

    Candidato* lista = new Candidato[3];
    strcpy(lista[0].nombre, "Ana");
    strcpy(lista[1].nombre, "Luis");
    strcpy(lista[2].nombre, "Carlos");
    for (int i = 0; i < 3; i++) lista[i].votos = 0;

    for (int i = 0; i < n; i++) {
        int voto;
        cout << "Voto #" << i + 1 << " (0-Ana, 1-Luis, 2-Carlos): ";
        cin >> voto;
        if (voto >= 0 && voto < 3) lista[voto].votos++;
    }

    Candidato* ganador = &lista[0];
    for (int i = 1; i < 3; i++)
        if (lista[i].votos > ganador->votos) ganador = &lista[i];

    cout << "Ganador: " << ganador->nombre << " con " << ganador->votos << " votos\n";
    delete[] lista;
    return 0;
}
