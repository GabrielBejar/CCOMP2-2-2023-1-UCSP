#include <iostream>

using namespace std;


int main() {
    int radio;

    cout << "Ingrese el radio: ";
    cin >> radio;


    cout << "El diametro es: " << (2 * radio) << endl;
    cout << "La circunferencia es: " << (2 * (3.14159 * radio)) << endl;
    cout << "El area es: " << (3.14159*(radio*radio)) << endl;


    return 0;
}