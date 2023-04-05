#include <iostream>

using namespace std;


int main(){

    int n1 = 1;
    int n2 = 1;
    int fib = 1;
    int n;

    cout << "Ingrese el numero: ";
    cin >> n;
    /*
    if (n == 0 || n == 1){

        cout << "El fib es " << fib << endl;
    }
    else{ */
        
        for (int i = 1; i < n; i++){
            fib = n1 + n2;
            n1 = n2;
            n2 = fib;
        }
        cout << "El fib es " << fib << endl;
    
    return 0;
    
    }
 
