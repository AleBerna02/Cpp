// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Inserisci una stringa: ";
    cin >> str;

    int vocali = 0;
    int i = 0;

    while (str[i] != '\0') {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vocali++;
        }
        i++;
    }

    cout << "Numero di vocali: " << vocali << endl;

    return 0;
}