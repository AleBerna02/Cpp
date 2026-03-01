// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

int ricercaLineare(int arr[], int dim, int x) {
    for (int i = 0; i < dim; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
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

    int x;
    cin >> x;

    cout << ricercaLineare(arr, n, x) << endl;

    return 0;
}