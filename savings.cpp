#include "savings.h"

SavingsAccount::SavingsAccount(): Account(){
    interestRate = 0;
}

SavingsAccount::SavingsAccount(Customer customer, double _interestRate , double _balance)
{
    Account(customer, _balance);
    interestRate = _interestRate;
}

void SavingsAccount::printInfo(bool showCustomerInfo){
    Account::printInfo(showCustomerInfo);
    cout << "Interest Rate: " << interestRate << endl;
}

void payInterest(){
}