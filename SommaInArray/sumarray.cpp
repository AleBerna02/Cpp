// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int sommaArray(int arr[], int dim) {
    int somma = 0;
    for (int i = 0; i < dim; i++) {
        somma += arr[i];
    }
    return somma;
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

    cout << sommaArray(arr, n) << endl;

    return 0;
}