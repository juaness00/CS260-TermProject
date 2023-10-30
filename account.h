#pragma once
#if !defined(account)
#define account
#include <iostream>
#include <string>
#include "customer.h"
using namespace std;



class Account{
    protected:
    int id, withdraws,deposits;
    double balance;
    Customer accountCustomer;
    public:
    Account();
    Account(string _fName, string _lName, string _address, string _phone, string _email);
    void deposit(double _amount);
    void withdraw(double _amount);
    void printInfo();

};


#endif
