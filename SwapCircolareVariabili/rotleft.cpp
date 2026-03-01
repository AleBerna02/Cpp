// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    cout << a << ", " << b << ", " << c << endl;

    float aux = a;
    a = b;
    b = c;
    c = aux;

    cout << a << ", " << b << ", " << c << endl;

    return 0;
}