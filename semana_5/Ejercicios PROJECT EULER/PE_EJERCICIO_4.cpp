#include <iostream>
using namespace std;




int Numero_inver(int n) {
    int rever = 0;
    while (n > 0) {
        int d = n % 10;
        rever = rever * 10 + d;
        n /= 10;
    }
    return rever;
}

bool esPalindromo(int n) {
    return n == Numero_inver(n);
}


int mayorPalindromo(){
    int mayor_palindromo = 0;

    for(int i = 100; i <= 999; i++){
        for(int j = i; j <= 999; j++){
            int producto = i * j;
            if(esPalindromo(producto) && producto > mayor_palindromo){
                mayor_palindromo = producto;
            }
        }
    }

    return mayor_palindromo;
}

int main(){

    int palindromo = mayorPalindromo();
    
    cout << "El palindromo mas grande formado por el producto de dos numeros de 3 cifras es: " << palindromo << endl;
    return 0;
}
