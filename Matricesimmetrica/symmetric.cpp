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

    cout << "Inserisci gli elementi della matrice:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrice[i][j];
        }
    }

    bool simmetrica = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrice[i][j] != matrice[j][i]) {
                simmetrica = false;
                break;
            }
        }
        if (!simmetrica) break;
    }

    if (simmetrica) {
        cout << "Simmetrica" << endl;
    } else {
        cout << "Non simmetrica" << endl;
    }

    return 0;
}