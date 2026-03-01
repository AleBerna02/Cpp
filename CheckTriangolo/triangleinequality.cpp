// File creato da Bernardello Alessio
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    if (a <= b + c && a >= abs(b - c) &&
        b <= a + c && b >= abs(a - c) &&
        c <= a + b && c >= abs(a - b)) {
        cout << "Possono essere i lati di un triangolo" << endl;
    } else {
        cout << "Non possono essere i lati di un triangolo" << endl;
    }

    return 0;
}