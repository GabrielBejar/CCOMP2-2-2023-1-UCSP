#include <iostream>
#include <string>

using namespace std;

class MotorVehicle {
public:
    MotorVehicle(string make, string fuelType, int yearOfManufacture, string color, int engineCapacity) {
        Make = make;
        FuelType = fuelType;
        YearOfManufacture = yearOfManufacture;
        Color = color;
        EngineCapacity = engineCapacity;
    }
    
    
    string getMake() const { 
        return Make; 
    }

    string getFuelType() const { 
        return FuelType; 
    }

    int getYearOfManufacture() const { 
        return YearOfManufacture; 
    }

    string getColor() const { 
        return Color; 
    }

    int getEngineCapacity() const { 
        return EngineCapacity; 
    }
    
    

    void setMake(string make) { 
        Make = make; 
    }

    void setFuelType(string fuelType) { 
        FuelType = fuelType; 
    }

    void setYearOfManufacture(int yearOfManufacture) { 
        YearOfManufacture = yearOfManufacture; 
    }

    void setColor(string color) { 
        Color = color; 
    }

    void setEngineCapacity(int engineCapacity) { 
        EngineCapacity = engineCapacity; 
    }
    
    void displayCarDetails() {
        cout << "Make: " << Make << endl;
        cout << "\nFuelType: " << FuelType << endl;
        cout << "\nYearOfManufacture: " << YearOfManufacture << endl;
        cout << "\nColor: " << Color << endl;
        cout << "\nEngineCapacity: " << EngineCapacity << endl;
    }

    
private:
    string Make;
    string FuelType;
    int YearOfManufacture;
    string Color;
    int EngineCapacity;
};
