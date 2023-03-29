#include <iostream>


using namespace std;


int main() {


    int num;
    int d1;
    int d2;
    int d3;
    int d4;

    cout << "Ingrese un numero entero con cuatro digitos: ";
    cin >> num;

  
    d1 = num % 10;

    num = num / 10;

    d2 = num % 10;

    num = num / 10;

    d3 = num % 10;
 
    num = num / 10;
  
    d4 = num % 10;



    cout << d1 << "  " << d2 << "  " << d3 << "  " << d4 << endl;

    return 0;
}
