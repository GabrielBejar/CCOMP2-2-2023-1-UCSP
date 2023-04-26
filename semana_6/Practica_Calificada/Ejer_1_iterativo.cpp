/*
Dos funciones (recursiva e iterativa), cada una de ellas, que reciba como argumento un arreglo de enteros y un entero que representa su tamaño, 
y que verifique si los elementos de un arreglo de enteros representan un palindromo; ejm {1, 2, 3, 2, 1} es palindromo, {1, 2, 3, 4, 5} no es.
*/


#include <iostream>
using namespace std;

bool esPalindromo(const int arr[], const int tam) {
    int ini = 0;
    int fin = tam - 1;
    while (ini < fin) {
        if (arr[ini] != arr[fin]) {
            return false;
        }
        ini++;
        fin--;
    }
    return true;
}


int main(){

    int arr1[5] = {1,2,3,2,1};
    int tamarr = 5;

    cout << esPalindromo(arr1, tamarr) << endl;

    return 0;
}