// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        return 7;
    }

    int f = n;
    
    if (n == 0) {
        f = 1;
    } else {
        for (int i = n - 1; i > 1; i--) {
            f *= i;
        }
    }

    cout << f << endl;
    return 0;
}