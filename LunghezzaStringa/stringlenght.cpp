// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Inserisci una stringa: ";
    cin >> str;

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    cout << "La lunghezza della stringa e': " << len << endl;

    return 0;
}