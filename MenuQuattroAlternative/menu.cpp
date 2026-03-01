// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int answer;
    
    do {
        cout << "1 - Prima scelta\n";
        cout << "2 - Seconda scelta\n";
        cout << "3 - Terza scelta\n";
        cout << "0 - Uscita dal programma\n";
        cout << "Fai una scelta: \n";
        
        cin >> answer;

        if (answer == 1) {
            cout << "Hai fatto la prima scelta\n";
        } else if (answer == 2) {
            cout << "Hai fatto la seconda scelta\n";
        } else if (answer == 3) {
            cout << "Hai fatto la terza scelta\n";
        } else if (answer == 0) {
            cout << "Hai scelto di uscire dal programma.\n";
        } else {
            cout << "Scelta non valida\n";
        }
    } while (answer != 0);

    return 0;
}