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

    int max_val = mat[0][0];
    int min_val = mat[0][0];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (mat[i][j] > max_val) {
                max_val = mat[i][j];
            }
            if (mat[i][j] < min_val) {
                min_val = mat[i][j];
            }
        }
    }

    cout << "Massimo: " << max_val << endl;
    cout << "Minimo: " << min_val << endl;

    return 0;
}