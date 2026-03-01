// File creato da Bernardello Alessio
#include <iostream>
using namespace std;

void fondiArray(int arr1[], int dim1, int arr2[], int dim2, int ris[]) {
    int i = 0, j = 0, k = 0;
    while (i < dim1 && j < dim2) {
        if (arr1[i] < arr2[j]) {
            ris[k++] = arr1[i++];
        } else {
            ris[k++] = arr2[j++];
        }
    }
    while (i < dim1) {
        ris[k++] = arr1[i++];
    }
    while (j < dim2) {
        ris[k++] = arr2[j++];
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
    fondiArray(arr1, n1, arr2, n2, ris);

    for (int i = 0; i < n1 + n2; i++) {
        cout << ris[i] << " ";
    }
    cout << endl;

    return 0;
}