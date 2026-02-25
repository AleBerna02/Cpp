// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 13 == 0) {
        cout << "Divisibile" << endl;
    } else {
        cout << "Non divisibile" << endl;
    }

    return 0;
}