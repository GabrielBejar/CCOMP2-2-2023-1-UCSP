#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main() {

CommissionEmployee commissionEmployee{"Sue", "Jones", "222-22-2222", 10000, .06};


BasePlusCommissionEmployee basePlusCommissionEmployee{"Bob", "Lewis", "333-33-3333", 5000, .04, 300};

cout << fixed << setprecision(2); 


cout << "INVOKING TOSTRING FUNCTION ON BASE-CLASS AND DERIVED-CLASS "
    << "\nOBJECTS WITH STATIC BINDING\n"
    << commissionEmployee.toString() 
    << "\n\n"
    << basePlusCommissionEmployee.toString(); 


cout << "\n\nINVOKING TOSTRING FUNCTION ON BASE-CLASS AND "
    << "\nDERIVED-CLASS OBJECTS WITH DYNAMIC BINDING";

const CommissionEmployee* commissionEmployeePtr{&commissionEmployee};

cout << "\n\nCALLING VIRTUAL FUNCTION TOSTRING WITH BASE-CLASS POINTER"
    << "\nTO BASE-CLASS OBJECT INVOKES BASE-CLASS "
    << "TOSTRING FUNCTION:\n"
    << commissionEmployeePtr->toString();

const BasePlusCommissionEmployee* basePlusCommissionEmployeePtr{
    &basePlusCommissionEmployee}; 

cout << "\n\nCALLING VIRTUAL FUNCTION TOSTRING WITH DERIVED-CLASS "
    << "POINTER\nTO DERIVED-CLASS OBJECT INVOKES DERIVED-CLASS "
    << "TOSTRING FUNCTION:\n"
    << basePlusCommissionEmployeePtr->toString();

commissionEmployeePtr = &basePlusCommissionEmployee;
cout << "\n\nCALLING VIRTUAL FUNCTION TOSTRING WITH BASE-CLASS POINTER"
    << "\nTO DERIVED-CLASS OBJECT INVOKES DERIVED-CLASS "
    << "TOSTRING FUNCTION:\n";

cout<< commissionEmployeePtr->toString() << endl;
} 
