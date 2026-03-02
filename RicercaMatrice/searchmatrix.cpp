// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int righe, colonne;
    cin >> righe >> colonne;

    int matrice[100][100];

    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cin >> matrice[i][j];
        }
    }

    int x;
    cin >> x;

    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            if (matrice[i][j] == x) {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }

    cout << "-1 -1" << endl;

    return 0;
}