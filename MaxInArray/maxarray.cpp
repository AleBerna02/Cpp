// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int trovaMassimo(int arr[], int dim) {
    int max_val = arr[0];
    for (int i = 1; i < dim; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
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

    cout << trovaMassimo(arr, n) << endl;

    return 0;
}