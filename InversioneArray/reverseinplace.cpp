// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

void invertiArray(int arr[], int dim) {
    for (int i = 0; i < dim / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[dim - 1 - i];
        arr[dim - 1 - i] = temp;
    }
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

    invertiArray(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}