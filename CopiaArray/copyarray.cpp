// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

void copiaArray(int sorgente[], int destinazione[], int dim) {
    for (int i = 0; i < dim; i++) {
        destinazione[i] = sorgente[i];
    }
}

int main() {
    int n;
    cin >> n;
    
    if (n <= 0 || n > 1000) {
        return 1;
    }

    int arr1[1000];
    int arr2[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    copiaArray(arr1, arr2, n);

    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}