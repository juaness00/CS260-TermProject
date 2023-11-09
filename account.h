#pragma once
#if !defined(ACCOUNT_H)
#define ACCOUNT_H
#include <iostream>
#include <string>
using namespace std;
#include "customer.h"


class Account
{
    protected:
    Customer accountCustomer;
    static int id;
    int accountId;
    int deposits;
    int withdraws;
    double balance;
    public:
    Account();
    Account(Customer customer, double _balance);
    
 
  void changefName(string _fname);
  void changelName(string _lname);
  void changeAddress(string _address);
  void changePhone(string _phone);
  void changeEmail(string _email);
  void changeUser(string _username);
  void changePassword(string _password);
  void setCustomer(Customer customer);
  string getfName();
  string getlName();
  string getAddress();
  string getPhone();
  string getEmail();
  string getUser();
  string getPassword();
  int getId();
  void deposit(double _amount);
  void withdraw(double _amount);
  void printInfo(bool showCustomerInfo);

};
#endif
