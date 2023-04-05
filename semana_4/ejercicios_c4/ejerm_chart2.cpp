#include <iostream>

using namespace std;


/*
Implemente un programa que reciba 2 caracteres, verifique si dichos caracteres representan numeros e imprima  el resultado de sumar dichos caracteres.
*/



int main() {

    char car1, car2;
    
    cout << "Ingrese el primer caracter: ";
    cin >> car1;
    cout << "Ingrese el segundo caracter: ";
    cin >> car2;



    int val1 = static_cast<int>(car1);
    int val2 = static_cast<int>(car2);



    if ( (val1 >= 48 && val1 <= 57) && (val2 >= 48 && val2 <= 57) ) {
        
        val1 = val1 - 48;
        val2 = val2 - 48;
        int sum = (val1 + val2);
        cout << "Son numeros y su suma es: " << sum << endl;
    }
    else{
        cout << "Uno o ambos caracteres no representan numero!!" << endl;

    }

    

    
    return 0;
    
}