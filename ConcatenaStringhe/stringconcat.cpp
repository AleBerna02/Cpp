// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    char str1[200];
    char str2[100];

    cout << "Inserisci la prima stringa: ";
    cin >> str1;
    
    cout << "Inserisci la seconda stringa: ";
    cin >> str2;

    int i = 0;
    while (str1[i] != '\0') {
        i++;
    }

    int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    cout << "Stringa concatenata: " << str1 << endl;

    return 0;
}