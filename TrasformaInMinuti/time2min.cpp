// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int ore, minuti;
    cout << "Inserisci ore (0-23): ";
    cin >> ore;
    cout << "Inserisci minuti (0-59): ";
    cin >> minuti;

    int totali = (ore * 60) + minuti;
    cout << "Minuti totali: " << totali << endl;

    return 0;
}