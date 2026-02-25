// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        n = -n;
    }

    cout << n << endl;

    return 0;
}