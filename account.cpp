#include "account.h"
int Account:: id = 1;

Account::Account()
{
    balance = 0;
    withdraws = 0;
    deposits = 0;
    accountId = id;
    id++;
    
}

Account::Account(Customer currentCustomer,double _balance){
    currentCustomer.PrintInfo();
    accountCustomer = currentCustomer;
    accountId = id;
    id++;
};

int Account::getId(){
    return accountId;
}
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

void Account::changefName(string _fname)
{
    accountCustomer.setfName(_fname);
}
void Account::changelName(string _lname)
{
    accountCustomer.setlName(_lname);
}

void Account::changeAddress(string _address)
{
    accountCustomer.setAddress(_address);
}

void Account::changePhone(string _phone)
{
    accountCustomer.setPhone(_phone);
}

void Account::changeEmail(string _email)
{
    accountCustomer.setEmail(_email);
}

void Account::changeUser(string _username)
{
    accountCustomer.setUser(_username);
}

void Account::changePassword(string _password)
{
    accountCustomer.setPassword(_password);
}

string Account::getfName()
{
    return accountCustomer.getfName();
}

string Account::getlName()
{
    return accountCustomer.getlName();
}

string Account::getAddress()
{
    return accountCustomer.getAddress();
}

string Account::getPhone()
{
    return accountCustomer.getPhone();
}

string Account::getEmail()
{
    return accountCustomer.getEmail();
}

string Account::getUser()
{
    return accountCustomer.getUser();
}

string Account::getPassword()
  {
    return accountCustomer.getPassword();
  }

void Account::printInfo(bool showCustomerInfo)
{
    if(showCustomerInfo)
        accountCustomer.PrintInfo();

    cout << "Balance: $" << balance << endl;
    cout << "Number of Withdraws: " << withdraws << endl;
    cout << "Number of Deposits: " << deposits << endl;

}

void Account::setCustomer(Customer customer){
    accountCustomer = customer;
}

double Account::getBalance(){
    return balance;
}