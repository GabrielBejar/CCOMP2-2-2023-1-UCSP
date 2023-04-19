/*
Implemente una funcion que reciba como argumento una cadena y un caracter y retorne la cantidad de veces que el caracter este presente en dicha cadena.
*/

#include <iostream>
using namespace std;


int contarCharEnString(string cad, char car){
    int leng = cad.length();
    int cont = 0;
    for(int i = 0; i < leng ; i++){
        if (cad.at(i) == car){
            cont++;
        }
    }
    return cont;
}




int main(){

    string cadena;
    cout  << "Ingrese una cadena: ";
    cin >> cadena;
    char caracter;
    cout << "Ingrese un caracter: ";
    cin >> caracter;


    cout << "El caracter " << caracter << " se repite: " << contarCharEnString(cadena, caracter) << " veces." << endl;


    return 0;
}