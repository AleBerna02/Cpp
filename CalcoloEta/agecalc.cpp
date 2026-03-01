// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int anno_nascita;
    int anno_corrente = 2026;
    cout << "In che anno sei nato? ";
    cin >> anno_nascita;

    cout << "Hai " << anno_corrente - anno_nascita << " anni." << endl;

    return 0;
}