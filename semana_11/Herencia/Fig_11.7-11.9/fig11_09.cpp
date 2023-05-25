#include <iostream>
#include <iomanip>
#include "BasePlusCommissionEmployee.h"
using namespace std;


int main(){
    BasePlusCommissionEmployee employee{"Bob", "Lewis", "333-33-333", 5000, .04, 300};


    cout << fixed << setprecision(2);
    cout << "Employee information obtained by get functions: \n"
        << "\nFirst name is " << employee.getFirstName()
        << "\nLast name is " << employee.getLastName()
        << "\nSocial Security Number is " << employee.getSocialSecurityNumber()
        << "\nGross sales is " << employee.getGrossSales()
        << "\nCommission rate is " << employee.getCommisionRate()
        << "\nBase Salary is " << employee.getBaseSalary () << endl;
    employee.setBaseSalary(1000);
    cout << "\nUpdated employee information from function toString: \n\n" << employee.ToString();
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
}