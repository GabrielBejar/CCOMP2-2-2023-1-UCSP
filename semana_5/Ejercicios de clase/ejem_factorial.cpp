#include <iostream>
using namespace std;



long long factorial(int n){
    if((n == 0) || (n == 1)){
        return 1;
    }
    else{
        return (n) * factorial(n-1);
    }
}


int main(){

    int n;


    cout << "Ingrese el numero: ";
    cin >> n;


    cout << "El factorial de " << n << " es " << factorial(n) << endl;
    


    return 0;
}
