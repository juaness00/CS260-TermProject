#pragma once
#if !defined(SAVINGS_H)
#define SAVINGS_H
#include <iostream>
#include <string>
#include "account.h"
using namespace std;


class SavingsAccount: public Account
{
    double interestRate;
    public:
    SavingsAccount();
    SavingsAccount(double _interestRate ,string _fName, string _lName, string _address, string _phone, string _email,string _username, string _password, int _id, double _balance);
    void printInfo();
};


#endif
