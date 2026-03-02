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

    int mat[100][100];
    int ruotata[100][100];

    cout << "Inserisci gli elementi della matrice:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ruotata[j][n - 1 - i] = mat[i][j];
        }
    }

    cout << "Matrice ruotata di 90 gradi:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ruotata[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}