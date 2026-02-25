// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int a0, a1, a2;
    cin >> a0 >> a1 >> a2;

    if (a0 > a1) {
        int temp = a0;
        a0 = a1;
        a1 = temp;
    }
    if (a0 > a2) {
        int temp = a0;
        a0 = a2;
        a2 = temp;
    }
    if (a1 > a2) {
        int temp = a1;
        a1 = a2;
        a2 = temp;
    }

    cout << "I numeri inseriti, in ordine crescente, sono:" << endl;
    cout << a0 << " < " << a1 << " < " << a2 << endl;

    return 0;
}