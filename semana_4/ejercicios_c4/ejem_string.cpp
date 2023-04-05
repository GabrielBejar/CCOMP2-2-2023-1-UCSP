#include <iostream>

using namespace std;


/*
Implemente un programa que solicite por teclado una cadena y un caracter e imprima la cantidad de veces que el caracter se encuentra en dicha cadena
*/



int main() {
    
    string cadena;
    char car;

    cout << "Ingrese una cadena: ";
    cin >> cadena;

    cout << "Ingrese un caracter: ";
    cin >> car;

    int contador = 0;

    for ( int i = 0 ; i < cadena.length() ; i++){

        if (cadena.at(i) == car){
            contador++;
        }
    }

    cout << "El caracter se repite: " << contador << endl;

    

    
    return 0;
    
}