// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Inserisci righe e colonne della prima matrice: ";
    cin >> r1 >> c1;
    cout << "Inserisci righe e colonne della seconda matrice: ";
    cin >> r2 >> c2;

    if (c1 != r2 || r1 <= 0 || c1 <= 0 || c2 <= 0 || r1 > 100 || c1 > 100 || c2 > 100) {
        cout << "Dimensioni non valide per la moltiplicazione." << endl;
        return 1;
    }

    int mat1[100][100];
    int mat2[100][100];
    int ris[100][100] = {0};

    cout << "Inserisci gli elementi della prima matrice:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Inserisci gli elementi della seconda matrice:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> mat2[i][j];
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                ris[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Matrice prodotto:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << ris[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}