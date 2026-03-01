// File creato da Bernardello Alessio
#include <iostream>
#include <string>
using namespace std;

int main() {
    string mossa1, mossa2;
    cin >> mossa1 >> mossa2;

    if (mossa1 == mossa2) {
        cout << "Pareggio" << endl;
    } else if ((mossa1 == "sasso" && mossa2 == "forbice") ||
               (mossa1 == "forbice" && mossa2 == "carta") ||
               (mossa1 == "carta" && mossa2 == "sasso")) {
        cout << "Vince il Giocatore 1" << endl;
    } else {
        cout << "Vince il Giocatore 2" << endl;
    }

    return 0;
}