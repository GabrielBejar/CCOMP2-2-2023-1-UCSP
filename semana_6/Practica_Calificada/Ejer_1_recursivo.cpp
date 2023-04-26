/*
Dos funciones (recursiva e iterativa), cada una de ellas, que reciba como argumento un arreglo de enteros y un entero que representa su tamaño, 
y que verifique si los elementos de un arreglo de enteros representan un palindromo; ejm {1, 2, 3, 2, 1} es palindromo, {1, 2, 3, 4, 5} no es.
*/



#include <iostream>
using namespace std;



bool esPalindromoRecur(const int arr[], const int tam) {
    if (tam == 1) {
        return true;
    }
    if (arr[0] != arr[tam - 1]) {
        return false;
    }
    return esPalindromoRecur(arr + 1, tam - 2);
}


int main(){

    int arr1[5] = {1,2,3,2,2};
    int tamarr = 5;

    cout << esPalindromoRecur(arr1, tamarr) << endl;

    return 0;
}