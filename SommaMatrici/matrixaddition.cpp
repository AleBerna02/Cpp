// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int righe, colonne;
    cout << "Inserisci il numero di righe e colonne: ";
    cin >> righe >> colonne;

    if (righe <= 0 || colonne <= 0 || righe > 100 || colonne > 100) {
        return 1;
    }

    int mat1[100][100];
    int mat2[100][100];

    cout << "Inserisci gli elementi della prima matrice:" << endl;
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Inserisci gli elementi della seconda matrice:" << endl;
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cin >> mat2[i][j];
        }
    }

    cout << "Matrice risultante dalla somma:" << endl;
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cout << mat1[i][j] + mat2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}