#include <iostream>
using namespace std;



long long fibo(int n){
    if((n == 0) || (n == 1)){
        return 1;
    }
    else{
        return fibo(n-2) + fibo(n-1);
    }
}


int main(){

    int n;


    cout << "Ingrese el numero: ";
    cin >> n;


    cout << "El fib de " << n << " es " << fibo(n) << endl;
    


    return 0;
}