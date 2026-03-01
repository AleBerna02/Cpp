// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

void rimuoviDuplicati(int arr[], int &dim) {
    for (int i = 0; i < dim; i++) {
        for (int j = i + 1; j < dim; ) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < dim - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                dim--;
            } else {
                j++;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) cin >> arr[i];

    rimuoviDuplicati(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}