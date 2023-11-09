#pragma once
#if !defined(CHECKING_H)
#define CHECKING_H
#include <iostream>
#include <string>
#include "account.h"
using namespace std;


class CheckingAccount: public Account
{
    double overDraftLimit;
    public:
    CheckingAccount();
    CheckingAccount(string _fName, string _lName, string _address, string _phone, string _email, int _id, double _balance, double _overDraftLimit);
    void Withdraw(double amount);


};


#endif
