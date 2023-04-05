#include <iostream>

using namespace std;


/*
Implemente un programa que reciba un caracter y verifique al dicho caracter es una letra ('a' - 'z' y 'A' - 'Z')
*/



int main() {

    char caracter;
    cout << "Ingrese un caracter: ";
    cin >> caracter;

    int val = static_cast<int>(caracter);

    if (( val >= 65 && val <=90) || (val >= 97 && val <= 122)){
        cout << "Es una letra!!!" << endl;
    }
    else{
        cout << "Es una letra!!!" << endl;
    }

    
    return 0;
    
}