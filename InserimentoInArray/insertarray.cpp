// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

void inserisciElemento(int arr[], int &dim, int pos, int val) {
    for (int i = dim; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    dim++;
}

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int pos, val;
    cin >> pos >> val;

    if (pos >= 0 && pos <= n) {
        inserisciElemento(arr, n, pos, val);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}