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
    CheckingAccount(Customer customer, double _balance, double _overDraftLimit);
    void Withdraw(double amount);


};


#endif
