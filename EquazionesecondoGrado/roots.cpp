// File creato da Bernardello Alessio
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    if (a == 0) {
        if (b != 0) {
            cout << "x = " << -c / b << endl;
        } else {
            cout << "Equazione non valida" << endl;
        }
        return 0;
    }

    float delta = (b * b) - (4 * a * c);

    if (delta > 0) {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    } else if (delta == 0) {
        float x = -b / (2 * a);
        cout << "x1 = x2 = " << x << endl;
    } else {
        float reale = -b / (2 * a);
        float immaginaria = sqrt(-delta) / (2 * a);
        cout << "Radici immaginarie: " << reale << " + " << immaginaria << "i, "
             << reale << " - " << immaginaria << "i" << endl;
    }

    return 0;
}