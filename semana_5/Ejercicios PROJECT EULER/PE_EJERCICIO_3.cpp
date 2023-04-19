



#include <iostream>
using namespace std;



void maydefactoresPrimos(long long n) {
    int may = 0;
    int factor = 2;

    cout << "Los factores primos de "<< n << " son: " << endl;
    
   while (n > 1) {
        if (n % factor == 0) {
            cout << factor << endl;
            n /= factor;
            may = factor;
        } else {
            factor++;
        }   
    }
    
    cout << "El mayor factor de 600851475143 es: " << may << endl;
}

int main() {

    long long numero = 600851475143;
    maydefactoresPrimos(numero);
    return 0;

}
