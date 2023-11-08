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
    int id;
    int deposits = 0;
    int withdraws = 0;
    double balance;
    Customer accountCustomer;
    public:
    Account();
    Account(string _fName, string _lName, string _address, string _phone, string _email, string _username, string _password, int ID, double _balance);
    
 
  void changefName(string _fname);
  void changelName(string _lname);
  void changeAddress(string _address);
  void changePhone(string _phone);
  void changeEmail(string _email);
  void changeUser(string _username);
  void changePassword(string _password);
  string getfName();
  string getlName();
  string getAddress();
  string getPhone();
  string getEmail();
  string getUser();
  string getPassword();
  int getID();
    
    void deposit(double _amount);
    void withdraw(double _amount);
    void printInfo();

};

#endif
