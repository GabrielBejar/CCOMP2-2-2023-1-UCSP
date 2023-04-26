/*
Dos funciones (recursiva e iterativa), cada una de ellas, que reciba como argumento un arreglo de enteros 
y un entero que representa su tamaño, e invierta los elementos de dicho arreglo; ejm, si recibe {1, 2, 3, 4, 5} 
despues de invocar a la función el arreglo debe tener: {5, 4, 3, 2, 1}.
*/



#include <iostream>
using namespace std;



void invertirArrRec(int arr[], int ini, int fin) {
    if (ini >= fin) {
        return; 
    }

   
    int temp = arr[ini];
    arr[ini] = arr[fin];
    arr[fin] = temp;

   
    invertirArrRec(arr, ini+1, fin-1);
}



int main() {

    int arr1[] = {1, 2, 3, 4, 5, 6};
    int ini = 0;
    int fin = 6;

    invertirArrRec(arr1, ini, fin-1);

    
    for (int i = 0; i < fin; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}
