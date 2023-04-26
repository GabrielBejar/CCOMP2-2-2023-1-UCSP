#include <iostream>
using namespace std;

void insertionSort(int arr[], int tam) {

    for (int i = 1; i < tam; i++) {
        int clave = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > clave) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = clave;
    }
}



int main() {

    int arr1[] = {5, 6, 4, 2, 1, 3};
    int tamarr = 6;

    insertionSort(arr1, tamarr);

    
    for (int i = 0; i < tamarr; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}
