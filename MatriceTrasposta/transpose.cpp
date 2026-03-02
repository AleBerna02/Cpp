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

    for (int j = 0; j < colonne; j++) {
        for (int i = 0; i < righe; i++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}