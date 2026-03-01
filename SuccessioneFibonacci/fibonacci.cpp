// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        return 1;
    }

    int t1 = 0, t2 = 1, prossimo_termine = 0;

    for (int i = 1; i <= n; i++) {
        if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }
        prossimo_termine = t1 + t2;
        t1 = t2;
        t2 = prossimo_termine;
        
        cout << prossimo_termine << " ";
    }
    cout << endl;

    return 0;
}