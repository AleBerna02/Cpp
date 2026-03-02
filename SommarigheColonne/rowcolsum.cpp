// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Inserisci numero di righe e colonne: ";
    cin >> r >> c;

    if (r <= 0 || c <= 0 || r > 100 || c > 100) {
        return 1;
    }

    int mat[100][100];
    cout << "Inserisci gli elementi della matrice:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        int somma_riga = 0;
        for (int j = 0; j < c; j++) {
            somma_riga += mat[i][j];
        }
        cout << "Somma riga " << i << ": " << somma_riga << endl;
    }

    for (int j = 0; j < c; j++) {
        int somma_colonna = 0;
        for (int i = 0; i < r; i++) {
            somma_colonna += mat[i][j];
        }
        cout << "Somma colonna " << j << ": " << somma_colonna << endl;
    }

    return 0;
}