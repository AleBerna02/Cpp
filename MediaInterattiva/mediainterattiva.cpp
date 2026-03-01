// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    char continua;
    int sum = 0;
    int count = 0;

    do {
        int n;
        cin >> n;
        sum += n;
        count++;

        cin >> continua;
    } while (continua == 's' || continua == 'S');

    if (count > 0) {
        cout << static_cast<double>(sum) / count << endl;
    }

    return 0;
}