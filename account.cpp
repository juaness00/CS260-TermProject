#include "account.h"

Account::Account()
{
    Customer();
    id=0;
    balance = 0;
    withdraws = 0;
    deposits = 0;
    
}

Account::Account(string _fName, string _lName, string _address, string _phone, string _email, int ID)
{
    


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
    cout << "Displaying information for account #" << id << endl;
    cout << "Balance: " << balance << endl;
    cout << "Number of Withdraws: " << withdraws << endl;
    cout << "Number of Deposits: " << deposits << endl;

}