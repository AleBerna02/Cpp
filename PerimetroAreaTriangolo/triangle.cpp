// File creato da Bernardello Alessio
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout << "Inserisci i tre lati: ";
    cin >> a >> b >> c;

    float perimetro = a + b + c;
    float p = perimetro / 2;
    float area = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Perimetro: " << perimetro << endl;
    cout << "Area: " << area << endl;

    return 0;
}