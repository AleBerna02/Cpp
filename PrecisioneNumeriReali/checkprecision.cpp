// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    float n;
    cout << "Inserisci un numero reale: ";
    cin >> n;

    float originale = n;

    n = n / 4.9 / 3.53 / 6.9998;
    n = n * 4.9 * 3.53 * 6.9998;

    if (n != originale) {
        cout << "moltiplicare NON è l'inverso di dividere" << endl;
    }

    return 0;
}