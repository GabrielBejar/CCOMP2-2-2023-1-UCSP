#include <iostream>

using namespace std;


int main() {


    float peso;
    float altu;
    float imc;

    
    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;

    
    cout << "Ingrese su altura en metros: ";
    cin >> altu;

    
    imc = peso / (altu * altu);

    
    cout << "Su IMC es: " << imc << endl;

    
    cout << "De acuerdo al Departamento de Salud y Servicios Humanos / Institutos Nacionales de Salud, su IMC indica lo siguiente:" << endl;

    
    if (imc < 18.5) {
        cout << "Usted tiene bajo peso" << endl;
    }
    else if (imc < 25) {
        cout << "Usted tiene peso normal" << endl;
    }
    else if (imc < 30) {
        cout << "Usted tiene sobrepeso" << endl;
    }
    else {
        cout << "Usted tiene obesidad" << endl;
    }
    
    return 0;
}
