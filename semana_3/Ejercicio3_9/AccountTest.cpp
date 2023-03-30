#include <iostream>
#include "Account.h"


using namespace std;


int main(){

    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};


    cout << "account1: " << account1.getName() << " balance is s/." << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is s/." << account2.getBalance();


    cout << "\nEnter deposit amount for accountl: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding s/." << depositAmount << " to account1 balance";
    account1.deposit(depositAmount);


    cout << "\n\naccount1: " << account1.getName() << " balance is s/." << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is s/." << account2.getBalance();



    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount; 
    cout << "adding s/." << depositAmount << " to account2 balance";
    account2.deposit(depositAmount);


    cout << "\n\naccount1: " << account1.getName() << " balance is s/." << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is s/." << account2.getBalance() << endl;
    

    //Parte de prueba para el ejercicio 3.9

    string respuesta;
    
    cout << "\nWould you like to withdraw?: ";
    cin >> respuesta;   
    


    if (respuesta == "Yes" || respuesta == "yes"){
        int cuenta;
        cout << "\nFrom which account do you wish to withdraw?(1 or 2): ";
        cin >> cuenta;
        cout << "\nEnter the amount to withdraw: ";
        int withdrawAmount;
        cin >> withdrawAmount;
        if (cuenta == 1){
        cout << "\nwithdrawing s/." << withdrawAmount << " from the balance of " << account1.getName() << "..." << endl;
        account1.withdraw(withdrawAmount);
        }
        if (cuenta == 2){
        cout << "\nwithdrawing s/." << withdrawAmount << " from the balance of " << account2.getName() << "..." << endl;
        account2.withdraw(withdrawAmount);
        }
        cout << "\n\naccount1: " << account1.getName() << " balance is s/." << account1.getBalance();
        cout << "\naccount2: " << account2.getName() << " balance is s/." << account2.getBalance() << endl;
    }
    else{
        cout << "Have a good day!" << endl;
    }
    return 0;
}