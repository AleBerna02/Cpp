// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    char first;
    cin >> first;

    while (first < 'A' || first > 'Z') {
        cin >> first;
    }

    char c = 'Z';
    
    if (first < c) {
        c = first;
    }

    char current;
    cin >> current;

    while (current >= 'A' && current <= 'Z') {
        if (current < c) {
            c = current;
        }
        cin >> current;
    }

    cout << c << endl;
    return 0;
}