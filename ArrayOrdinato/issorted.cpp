// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

bool verificaOrdinamento(int arr[], int dim) {
    for (int i = 0; i < dim - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
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

    if (verificaOrdinamento(arr, n)) {
        cout << "Ordinato" << endl;
    } else {
        cout << "Non ordinato" << endl;
    }

    return 0;
}