// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        return 1;
    }

    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }

    cout << a << endl;

    return 0;
}