/*
Dos funciones (recursiva e iterativa), cada una de ellas, que reciba como argumento un arreglo de enteros y un entero que representa su tamaño, 
y que verifique si los elementos de un arreglo de enteros representan un palindromo; ejm {1, 2, 3, 2, 1} es palindromo, {1, 2, 3, 4, 5} no es.
*/


#include <iostream>
#include <array>
using namespace std;


bool esPalindromo(int x[], int limite){
    
    for (int i = 0; i < limite - 2; i++) {
        if(x[i] == x[limite - 1])
            continue;
        else{
            return false;
        }
    }


}


int main(){

    int arr[5] = {1,2,3,2,1};
    int lenar = 5;
           
    cout << esPalindromo(arr, lenar) << endl;
    

    return 0;
}