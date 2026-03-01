// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    cout << "Inserisci il valore per la variabile a: ";
    int a;
    cin >> a;

    cout << "Inserisci il valore per la variabile b: ";
    int b;
    cin >> b;

    cout << endl << "a vale " << a;
    cout << endl << "b vale " << b;

    int c = a;
    a = b;
    b = c;

    cout << endl << "a vale " << a;
    cout << endl << "b vale " << b;

    return 0;
}