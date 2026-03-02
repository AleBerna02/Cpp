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

    bool trovato = false;
    for (int i = 0; i < r; i++) {
        int min_riga = mat[i][0];
        int col_min = 0;
        for (int j = 1; j < c; j++) {
            if (mat[i][j] < min_riga) {
                min_riga = mat[i][j];
                col_min = j;
            }
        }

        bool e_massimo_colonna = true;
        for (int k = 0; k < r; k++) {
            if (mat[k][col_min] > min_riga) {
                e_massimo_colonna = false;
                break;
            }
        }

        if (e_massimo_colonna) {
            cout << "Punto di sella trovato in posizione (" << i << ", " << col_min << ") con valore " << min_riga << endl;
            trovato = true;
        }
    }

    if (!trovato) {
        cout << "Nessun punto di sella trovato." << endl;
    }

    return 0;
}