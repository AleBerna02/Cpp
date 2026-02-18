// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    float base, altezza;
    cout << "Inserisci la base: ";
    cin >> base;
    cout << "Inserisci l'altezza: ";
    cin >> altezza;

    float perimetro = 2 * (base + altezza);
    float area = base * altezza;

    cout << "Perimetro: " << perimetro << endl;
    cout << "Area: " << area << endl;

    return 0;
}