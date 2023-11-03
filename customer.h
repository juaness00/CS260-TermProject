#pragma once
#if !defined(CUSTOMER_H)
#define CUSTOMER_H
#include <iostream>
#include <string>
using namespace std;

class Customer
{
  string fname, lname, adress, phone, email;

  public:

  Customer();
  Customer(string _fname, string _lname, string _adress, string _phone, string _email);
  void setDefault();
  void setAll(string _fname, string _lname, string _adress, string _phone, string _email);
  void setName(string _fname, string _lname);
  void setAdress(string _adress);
  void setPhone(string _phone);
  void setEmail(string _email);
  void getName();
  void getAdress();
  void getPhone();
  void getEmail();
  void PrintInfo();




};


#endif
