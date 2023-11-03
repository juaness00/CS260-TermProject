#include "savings.h"

SavingsAccount::SavingsAccount(): Account(){
    interestRate = 0;
}

SavingsAccount::SavingsAccount(double _interestRate ,string _fName, string _lName, string _address, string _phone, string _email, int _id, double _balance): Account(_fName,_lName,_address,_phone,_email,_id,_balance){
    interestRate = _interestRate;
}

void SavingsAccount::printInfo(){
    Account::printInfo();
    cout << "Interest Rate: " << interestRate << endl;
}

void payInterest(){
}