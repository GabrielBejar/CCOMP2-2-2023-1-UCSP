#include <iostream>

using namespace std;


int main(){

    int n1;
    int n2;
    int n3;

    cout << "Ingrese 3 numeros enteros: ";
    cin >> n1 >> n2 >> n3;


    if ((n1 % n3 == 0) && (n2 % n3 == 0)){
        cout << "Son factores" << endl;
    }
    else{
        cout << "No son factores" << endl;
    }


    return 0;


}