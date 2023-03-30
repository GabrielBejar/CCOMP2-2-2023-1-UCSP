#include <iostream>
#include "MotorVehicle.h" 


using namespace std;


int main() {
    
    MotorVehicle car1("Volkswagen", "gasoline", 2023, "Green", 2000);
    
    
    cout << "CAR DETAILS:" << endl;
    car1.displayCarDetails();
    cout << endl;
    
    
    return 0;
}
