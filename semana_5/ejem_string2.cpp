/*
Implemente una funcion que reciba como argumento una cadena de caracteres e indique y retorne el numero total de digitos que tiene dicha cadena.

*/

#include <iostream>
using namespace std;

bool esNumero(char car){
    return (car >= 48 && car <= 57);
}

int contarDigEnString(string cad){
    int leng = cad.length();
    int cont = 0;
    for(int i = 0; i < leng ; i++){
        if (esNumero(cad.at(i)) == 1){
            cont++;
        }
    }
    return cont;
}



int main(){

    string cadena;
    cout  << "Ingrese una cadena: ";
    cin >> cadena;

    cout << "La cantidad de numeros es: " << contarDigEnString(cadena) << endl;


    return 0;
}