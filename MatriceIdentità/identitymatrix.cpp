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
    cout << "Inserisci gli elementi della matrice:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    bool identita = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && mat[i][j] != 1) {
                identita = false;
            }
            if (i != j && mat[i][j] != 0) {
                identita = false;
            }
        }
    }

    if (identita) {
        cout << "Matrice identita'" << endl;
    } else {
        cout << "Non e' una matrice identita'" << endl;
    }

    return 0;
}