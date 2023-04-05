#include <iostream>

using namespace std;


/*
Implemente un programa que solicite por teclado una cadena, la cual contendrá unicamente numeros e imprima la suma de los digitos de dicha cadena.
*/



int main() {
    
    string cadena;

    cout << "Ingrese una cadena que solo contenga numeros: ";
    cin >> cadena;

    int suma = 0;
    for ( int i = 0; i < cadena.length(); i++ ){
        suma += (cadena.at(i) - '0');

    }
    
    cout << "La suma es " << suma << endl;
    
    return 0;
    
}