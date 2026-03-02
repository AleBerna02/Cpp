// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    char str1[100];
    char str2[100];

    cout << "Inserisci la stringa da copiare: ";
    cin >> str1;

    int i = 0;
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    cout << "Stringa copiata: " << str2 << endl;

    return 0;
}