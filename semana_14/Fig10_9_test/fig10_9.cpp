#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;


int main() {
    Array integers1{7}; 
    Array integers2; 


    cout << "Size of Array integers1 is " << integers1.getSize()
        << "\nArray after initialization: " << integers1;


    cout << "\nSize of Array integers2 is " << integers2.getSize()
        << "\nArray after  initialization: " << integers2;



    cout << "\nEnter 17 integers:" << endl;
    cin >> integers1 >> integers2;

    cout << "\nAfter input, the Arrays contain:\n"
    

}