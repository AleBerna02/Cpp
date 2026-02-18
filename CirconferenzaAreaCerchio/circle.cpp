// File creato da Bernardello Alessio
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double raggio;
    const double pi = 3.141592653589793;
    cout << "Inserisci il raggio: ";
    cin >> raggio;

    double circonferenza = 2 * pi * raggio;
    double area = pi * pow(raggio, 2);

    cout << "Circonferenza: " << circonferenza << endl;
    cout << "Area: " << area << endl;

    return 0;
}