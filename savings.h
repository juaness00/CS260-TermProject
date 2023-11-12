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
    SavingsAccount(Customer customer, double _interestRate , double _balance);
    void printInfo(bool showCustomerInfo);
    void payInterest();
    void deposit(double amount);
};


#endif
