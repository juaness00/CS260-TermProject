#pragma once
#if !defined(ACCOUNT_H)
#define ACCOUNT_H
#include <iostream>
#include <string>
#include "customer.h"

using namespace std;


class Account
{
    protected:
    int id, withdraws,deposits;
    double balance;
    Customer accountCustomer;
    public:
    Account();
    Account(string _fName, string _lName, string _address, string _phone, string _email, int ID, double _balance);
    void deposit(double _amount);
    void withdraw(double _amount);
    void printInfo();

};

#endif
