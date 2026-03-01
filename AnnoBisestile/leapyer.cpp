// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int anno;
    cin >> anno;

    if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) {
        cout << "Bisestile" << endl;
    } else {
        cout << "Non bisestile" << endl;
    }

    return 0;
}