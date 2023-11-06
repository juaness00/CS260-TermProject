#include "account.h"


Account::Account(): accountCustomer(){
    balance = 0;
    withdraws = 0;
    deposits = 0;
    
}

Account::Account(string _fName, string _lName, string _address, string _phone, string _email, int _id, double _balance): accountCustomer(_fName, _lName,_address,_phone,_email)
{
    id = _id;
    balance = _balance;
};

void Account::deposit(double _amount)
{
    if(_amount <= 0){
        cout << "Invalid Deposit amount, Try again. \n";
        return;
    }
    balance = balance + _amount;
    deposits++;
}
void Account::withdraw(double _amount)
{
    if(_amount <= 0){
        cout << "Invalid withdraw amount, Try again. \n";
        return;
    }
    balance = balance - _amount;
    withdraws++;
}
void Account::printInfo()
{
    
    cout << "Displaying information for account..." << id << endl;
    accountCustomer.PrintInfo();
    cout << "Balance: " << balance << endl;
    cout << "Number of Withdraws: " << withdraws << endl;
    cout << "Number of Deposits: " << deposits << endl;

}



