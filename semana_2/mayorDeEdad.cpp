//Comentario de linea

/*

comentarios de varias lineas :)
*/


/*
    IMPLEMENTAR UN PROGRAMA QUE SOLICITE POR TECLADO UN NUMERO QUE REPRESENTA LA EDAD DE UNA PERSONA, E IMPRIMA SI DICHA EDAD PERTENECE A UNA PERSONA MAYOR DE EDAD.
*/


#include <iostream>

using namespace std;


int main() {
    int e;

    cout << "Ingrese su edad: ";
    cin >> e;

    if (e >= 18) {
        cout << "Es mayor de edad" << endl;
    } else {
        cout << "Es menor de edad" << endl;
    }

    return 0;
}