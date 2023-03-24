#include <iostream>

using namespace std;


int main() {

    int a;
    int b;


    cout << "Ingrese el número 1: ";
    cin >> a;
    cout << "Ingrese el número 2: ";
    cin >> b;


    if(a % 2 == 0)
        cout << "El primer número es PAR" << endl;
        
    else 
        cout << "El primer número es IMPAR" << endl;

    if(b % 2 == 0)
        cout << "El segundo número es PAR" << endl;
        
    else 
        cout << "El segundo número es IMPAR" << endl;
        
    if ((a + b) % 2 == 0)
        cout << "La suma de los números es PAR" << endl;

    else
        cout << "La suma de los números es IMPAR" << endl;


    return 0;
}