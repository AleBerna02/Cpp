// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int len;
    cin >> len;

    if (len <= 0) {
        return 1;
    }

    char c;
    cin >> c;

    for (int i = 0; i < len; i++) {
        cout << c;
    }
    cout << endl;

    return 0;
}