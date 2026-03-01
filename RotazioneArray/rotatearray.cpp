// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

void ruotaSinistra(int arr[], int dim) {
    if (dim > 0) {
        int primo = arr[0];
        for (int i = 0; i < dim - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[dim - 1] = primo;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) cin >> arr[i];

    ruotaSinistra(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}