// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int righe, colonne;
    cin >> righe >> colonne;

    if (righe <= 0 || colonne <= 0 || righe > 100 || colonne > 100) {
        return 1;
    }

    int matrice[100][100];
    int somma = 0;

    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cin >> matrice[i][j];
            somma += matrice[i][j];
        }
    }

    cout << somma << endl;

    return 0;
}