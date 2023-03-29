#include <iostream>

using namespace std;


int main() {

    int a;
    int b;


    cout << "Ingrese el numero 1: ";
    cin >> a;
    cout << "Ingrese el numero 2: ";
    cin >> b;


    if(a % 2 == 0)
        cout << "El primer numero es PAR" << endl;
        
    else 
        cout << "El primer numero es IMPAR" << endl;

    if(b % 2 == 0)
        cout << "El segundo numero es PAR" << endl;
        
    else 
        cout << "El segundo numero es IMPAR" << endl;
        
    if ((a + b) % 2 == 0)
        cout << "La suma de los numeros es PAR" << endl;

    else
        cout << "La suma de los numeros es IMPAR" << endl;


    return 0;
}