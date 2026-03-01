// File creato da Bernardello Alessio
#include <iostream>
#include <string>
using namespace std;

int main() {
    int ore, minuti;
    cin >> ore >> minuti;

    if (ore < 1 || ore > 12 || minuti < 0 || minuti > 59) {
        cout << "Errore: input non valido" << endl;
        return -1;
    }

    string nomi_ore[] = {"", "una", "due", "tre", "quattro", "cinque", "sei", 
                         "sette", "otto", "nove", "dieci", "undici", "dodici"};

    cout << "Sono le ore " << nomi_ore[ore];

    int quarti = minuti / 15;
    if (quarti == 1) {
        cout << " e un quarto";
    } else if (quarti == 2) {
        cout << " e mezza";
    } else if (quarti == 3) {
        cout << " e tre quarti";
    }

    if (minuti % 15 != 0) {
        cout << " circa";
    }
    
    cout << endl;

    return 0;
}