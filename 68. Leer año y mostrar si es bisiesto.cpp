#include 
using namespace std;

int main() {
    int año;
    cin >> año;
    cout << ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0) ? "Bisiesto" : "No bisiesto");
    return 0;
}
