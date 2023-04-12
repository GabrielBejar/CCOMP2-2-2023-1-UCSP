#include <iostream>
using namespace std;


bool esLetra(char car){
    if (( car >= 65 && car <=90) || (car >= 97 && car <= 122)){
        return true;
    }
    else{
        return false;
    }
}

bool esNumero(char car){
    return (car >= 48 && car <= 57);
}
 

int main(){

    char n;



    cout << "Ingrese el caracter: ";
    cin >> n;

    cout << esLetra(n) << endl;



    return 0;


}