/*
implemente una funcion que reciba un numero y retorne la cantidad de digitos que tiene.

por ejem: 12345
retorna 6
*/

#include <iostream>
using namespace std;





int contarDigEnInt(long long nume){
    int cont = 0;
    for(cont; cont > 0 ; cont++){
        nume /= 10;
    }
    return cont;
}



int main(){

    long long num;
    cout  << "Ingrese un numero: ";
    cin >> num;

    cout << "La cantidad de digitos es: " << contarDigEnInt(num) << endl;


    return 0;
}