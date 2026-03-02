// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Inserisci una parola: ";
    cin >> str;

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    bool palindroma = true;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            palindroma = false;
            break;
        }
    }

    if (palindroma) {
        cout << "La parola e' palindroma" << endl;
    } else {
        cout << "La parola non e' palindroma" << endl;
    }

    return 0;
}