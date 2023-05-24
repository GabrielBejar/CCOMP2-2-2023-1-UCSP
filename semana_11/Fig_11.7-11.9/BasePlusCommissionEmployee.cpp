#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "BasePlusCommissionEmployee.h"
using namespace std;


BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first, const string& last, const string& ssn, double sales, double rate, double salary){
    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn;
    setGrossSales(sales);
    setCommissionRate(rate);
    setBaseSalary(salary);
}



void BasePlusCommissionEmployee::setFirstName(const string& first){
    firstName = first;
}
string BasePlusCommissionEmployee::getFirstName() const{
    return firstName;
}

void BasePlusCommissionEmployee::setLastName(const string& last){
    lastName = last;
}
string BasePlusCommissionEmployee::getLastName() const{
    return lastName;
}

void BasePlusCommissionEmployee::setSocialSecurityNumber(const string& ssn){
    socialSecurityNumber = ssn;
}
string BasePlusCommissionEmployee::getSocialSecurityNumber() const{
    return socialSecurityNumber;
}

void BasePlusCommissionEmployee::setGrossSales(double sales){
    if (sales < 0.0){
        throw invalid_argument("Gross sales must be >= 0.0");
    }
    grossSales = sales;
}
double BasePlusCommissionEmployee::getGrossSales() const{
    return grossSales;
}

void BasePlusCommissionEmployee::setCommissionRate(double rate){
    if(rate <= 0.0 || rate >= 1.0){
        throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
    }

    commissionRate = rate;
}
double BasePlusCommissionEmployee::getCommisionRate() const{
    return commissionRate;
}

void BasePlusCommissionEmployee::setBaseSalary(double salary){
    if (salary < 0.0){
        throw invalid_argument("Salary must be >= 0.0");
    }

    baseSalary = salary;
}
double BasePlusCommissionEmployee::getBaseSalary() const{
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const{
    return baseSalary + (commissionRate * grossSales);
}
string BasePlusCommissionEmployee::ToString() const{
    ostringstream output;
    output << fixed << setprecision(2);
    output << "base-salaried commission employee: " << firstName << ' '
        << lastName << "\n social security number: " << socialSecurityNumber
        << "\ngross sales: " << grossSales
        << "\ncommission rate: " << commissionRate
        << "\n base salary:" << baseSalary;

    return output.str();
}