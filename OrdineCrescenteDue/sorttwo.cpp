// File creato da Bernardello Alessio
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    double min = (a + b - abs(a - b)) / 2.0;
    double max = (a + b + abs(a - b)) / 2.0;

    cout << min << " " << max << endl;

    return 0;
}