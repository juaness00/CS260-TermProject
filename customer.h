#pragma once
#if !defined(CUSTOMER_H)
#define CUSTOMER_H
#include <iostream>
#include <string>
using namespace std;

class Customer
{
  string fname, lname, address, phone, email, username, password;

  public:

  Customer();
  Customer(string _fname, string _lname, string _address, string _phone, string _email);
  void setDefault();
  void setAll(string _fname, string _lname, string _address, string _phone, string _email);
  void setfName(string _fname);
  void setlName(string _lname);
  void setAddress(string _address);
  void setPhone(string _phone);
  void setEmail(string _email);
  void setUser(string _username);
  void setPassword(string _password);
  string getfName();
  string getlName();
  string getAddress();
  string getPhone();
  string getEmail();
  string getUser();
  void PrintInfo();


};


#endif
