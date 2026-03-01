// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

void concatenaArray(int arr1[], int dim1, int arr2[], int dim2, int ris[]) {
    for (int i = 0; i < dim1; i++) {
        ris[i] = arr1[i];
    }
    for (int i = 0; i < dim2; i++) {
        ris[dim1 + i] = arr2[i];
    }
}

int main() {
    int n1;
    cin >> n1;
    int arr1[1000];
    for (int i = 0; i < n1; i++) cin >> arr1[i];

    int n2;
    cin >> n2;
    int arr2[1000];
    for (int i = 0; i < n2; i++) cin >> arr2[i];

    int ris[2000];
    concatenaArray(arr1, n1, arr2, n2, ris);

    for (int i = 0; i < n1 + n2; i++) {
        cout << ris[i] << " ";
    }
    cout << endl;

    return 0;
}