// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;

    if (k < 0) {
        return 666;
    }

    int inv = 0;
    while (k > 0) {
        int mod = k % 10;
        k = k / 10;
        inv = inv * 10;
        inv = inv + mod;
    }

    cout << inv << endl;

    return 0;
}