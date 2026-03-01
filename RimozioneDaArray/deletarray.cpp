// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

void rimuoviElemento(int arr[], int &dim, int pos) {
    for (int i = pos; i < dim - 1; i++) {
        arr[i] = arr[i + 1];
    }
    dim--;
}

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int pos;
    cin >> pos;

    if (pos >= 0 && pos < n) {
        rimuoviElemento(arr, n, pos);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}