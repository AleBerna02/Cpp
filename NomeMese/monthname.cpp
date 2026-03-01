// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int mese;
    cin >> mese;

    switch (mese) {
        case 1: cout << "gennaio" << endl; break;
        case 2: cout << "febbraio" << endl; break;
        case 3: cout << "marzo" << endl; break;
        case 4: cout << "aprile" << endl; break;
        case 5: cout << "maggio" << endl; break;
        case 6: cout << "giugno" << endl; break;
        case 7: cout << "luglio" << endl; break;
        case 8: cout << "agosto" << endl; break;
        case 9: cout << "settembre" << endl; break;
        case 10: cout << "ottobre" << endl; break;
        case 11: cout << "novembre" << endl; break;
        case 12: cout << "dicembre" << endl; break;
        default:
            cout << "Errore: numero mese non valido" << endl;
            return 1;
    }

    return 0;
}