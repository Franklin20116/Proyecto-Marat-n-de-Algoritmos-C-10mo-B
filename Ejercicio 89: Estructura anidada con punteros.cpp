#include <iostream>
using namespace std;

struct Autor {
    char nombre[50];
    int nacimiento;
};

struct Libro {
    char titulo[50];
    Autor autor;
};

int main() {
    Libro* l = new Libro;
    cout << "Título del libro: ";
    cin.getline(l->titulo, 50);
    cout << "Nombre del autor: ";
    cin.getline(l->autor.nombre, 50);
    cout << "Año de nacimiento: ";
    cin >> l->autor.nacimiento;

    cout << "\nLibro: " << l->titulo << "\nAutor: " << l->autor.nombre
         << " (Nacido en " << l->autor.nacimiento << ")\n";

    delete l;
    return 0;
}
