// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    char answer;
    
    do {
        int n;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cout << "*";
        }
        cout << endl;
        
        cin >> answer;
    } while (answer != 's' && answer != 'S');

    return 0;
}