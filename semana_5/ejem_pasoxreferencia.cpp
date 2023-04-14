#include <iostream>

using namespace std;


void incremento(int &q ){
    q = q + 1;
    cout << "q dentro de la funcion incremento " << q << endl;
}


int main(){
    int q = 3;
    incremento(q);
    cout << "q en la funcion main " << q << endl;

    return 0;
}