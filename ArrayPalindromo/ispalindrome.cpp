// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

bool verificaPalindromo(int arr[], int dim) {
    for (int i = 0; i < dim / 2; i++) {
        if (arr[i] != arr[dim - 1 - i]) {
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

    if (verificaPalindromo(arr, n)) {
        cout << "Palindromo" << endl;
    } else {
        cout << "Non palindromo" << endl;
    }

    return 0;
}