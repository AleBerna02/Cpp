// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Inserisci la dimensione della matrice quadrata: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        return 1;
    }

    int matrice[100][100];
    int somma_principale = 0;
    int somma_secondaria = 0;

    cout << "Inserisci gli elementi della matrice:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrice[i][j];
            if (i == j) {
                somma_principale += matrice[i][j];
            }
            if (i + j == n - 1) {
                somma_secondaria += matrice[i][j];
            }
        }
    }

    cout << somma_principale << " " << somma_secondaria << endl;

    return 0;
}