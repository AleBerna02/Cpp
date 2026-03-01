// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int how_many;
    cin >> how_many;

    if (how_many <= 0) {
        return 42;
    }

    float sum = 0;
    int i = 0;
    do {
        float x;
        cin >> x;
        sum += x;
        i++;
    } while (i < how_many);

    cout << sum / how_many << endl;
    return 0;
}