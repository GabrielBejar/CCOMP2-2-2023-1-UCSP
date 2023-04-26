#include <iostream>
using namespace std;

void bubbleSort(int arr[], int tam) {
    
    for (int i = 0; i < tam-1; i++) {
        for (int j = 0; j < tam-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}



int main() {

    int arr1[] = {5, 2, 4, 6, 1, 3};
    int tamarr = 6;

    bubbleSort(arr1, tamarr);

    for (int i = 0; i < tamarr; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}
