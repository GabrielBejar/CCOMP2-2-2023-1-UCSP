#include <iomanip>
#include <sstream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"
using namespace std;


BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string& first, const string& last, const string& ssn,
    double sales, double rate, double salary)
    : CommissionEmployee(first, last, ssn, sales, rate) {
    setBaseSalary(salary); 
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    if (salary < 0.0) {
        throw invalid_argument("Salary must be >= 0.0");
    }

    baseSalary = salary;
}
double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}


double BasePlusCommissionEmployee::earnings() const {
    return baseSalary + (commissionRate * grossSales);
}


string BasePlusCommissionEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "base-salaried commission employee: " << firstName << ' '
        << lastName << "\nsocial security number: " << socialSecurityNumber
        << "\ngross sales: " << grossSales
        << "\ncommission rate: " << commissionRate
        << "\nbase salary: " << baseSalary;
    return output.str();
}