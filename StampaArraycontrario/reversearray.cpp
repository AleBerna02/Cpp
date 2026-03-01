// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

void stampaInverso(int arr[], int dim) {
    for (int i = dim - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    
    if (n <= 0 || n > 1000) {
        return 1;
    }

    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stampaInverso(arr, n);

    return 0;
}