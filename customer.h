#pragma once
#if !defined(customer)
#define customer
#include <iostream>
#include <string>
using namespace std;

class Customer
{
  string fname, lname, adress, phone, email;

  public:
  Customer(string _fname, string _lname, string _adress, string _phone, string _email);
  void setName(string _fname, string _lname, string _adress, string _phone, string _email);
  
};


#endif
