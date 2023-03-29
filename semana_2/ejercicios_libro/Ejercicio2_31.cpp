#include <iostream>


using namespace std;


int main() {


    float km_recorridos;
    float costo_gasolina;
    float millas_por_galon;
    float tasas_aparcamiento;
    float peajes;
    float costo_diario_gasolina;
    float costo_diario_compartido;


    int num_pasajeros; 

    
    cout << "Ingrese los kilometros recorridos al dia: ";
    cin >> km_recorridos;
    

    cout << "Ingrese el coste por galon de gasolina: ";
    cin >> costo_gasolina;
    

    cout << "Ingrese el promedio de millas por galon: ";
    cin >> millas_por_galon;
    

    cout << "Ingrese las tasas de aparcamiento por dia: ";
    cin >> tasas_aparcamiento;
    

    cout << "Ingrese los peajes por dia: ";
    cin >> peajes;
    

    cout <<"Ingrese un numero de pasajeros: ";
    cin >> num_pasajeros;


    costo_diario_gasolina = (km_recorridos / millas_por_galon) * costo_gasolina + tasas_aparcamiento + peajes;
    
    costo_diario_compartido = costo_diario_gasolina / (num_pasajeros + 1); 
    


    cout << "El coste diario de conducir es: s/." << costo_diario_gasolina << endl;
    
    cout << "Si compartieras el coche con " << num_pasajeros << " pasajeros, podrias ahorrarte s/." << costo_diario_gasolina - costo_diario_compartido << " al dia." << endl;
    

    return 0;
}
