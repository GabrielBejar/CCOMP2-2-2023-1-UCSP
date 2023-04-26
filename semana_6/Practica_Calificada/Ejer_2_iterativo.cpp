/*
Dos funciones (recursiva e iterativa), cada una de ellas, que reciba como argumento un arreglo de enteros 
y un entero que representa su tamaño, e invierta los elementos de dicho arreglo; ejm, si recibe {1, 2, 3, 4, 5} 
despues de invocar a la función el arreglo debe tener: {5, 4, 3, 2, 1}.
*/


#include <iostream>
using namespace std;


void invertirArr( int arr[], int tam) {
    int ini = 0;
    int fin = tam - 1;
    while (ini < fin) {
        int temp = arr[ini];
        arr[ini] = arr[fin];
        arr[fin] = temp;
        ini++;
        fin--;
    }
}


int main(){


    int arr1[] = {1, 2, 3, 4, 5, 6};
    int tamarr = 6;

    invertirArr(arr1, tamarr);

    for (int i = 0; i < tamarr; i++) {
        cout << arr1[i] << " " ;
    }
    cout << endl;

    return 0;
}