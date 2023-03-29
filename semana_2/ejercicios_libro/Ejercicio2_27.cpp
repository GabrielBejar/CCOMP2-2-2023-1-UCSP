#include <iostream>

using namespace std;

int main() {

    char carac;

    cout << "Ingrese un caracter: ";
    cin >> carac;

    int valor_entero = static_cast<int>(carac);

    cout << "El equivalente entero de " << carac << " es " << valor_entero << endl;

    return 0;
}
