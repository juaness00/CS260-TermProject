  #include "customer.h"
 
 
 
  Customer::Customer()
  {

    fname = " ";
    lname = " ";
    adress = " ";
    phone = " ";
    email = " "; 

  }


  Customer::Customer(string _fname, string _lname, string _adress, string _phone, string _email)
  {
    fname = _fname;
    lname = _lname;
    adress = _adress;
    phone = _phone;
    email = _email;

  }
 
  void Customer::setAll(string _fname, string _lname, string _adress, string _phone, string _email)
  {
    fname = _fname;
    lname = _lname;
    adress = _adress;
    phone = _phone;
    email = _email;

  }

  void Customer::setName(string _fname, string _lname)
  {
    fname = _fname;
    lname = _lname;
  }
  
  void Customer::setAdress(string _adress)
  {
    adress = _adress;
  }
  
  void Customer::setPhone(string _phone)
  {
    phone = _phone;
  }
  
  void Customer::setEmail(string _email)
  {
    email = _email;
  }

  void Customer::getName()
  {
    cout << "Name: " << fname << " " << lname << endl;
  }

  void Customer::getAdress()
  {
    cout << "Adress: " << adress << endl;
  }

  void Customer::getPhone()
  {
    cout << "Phone: " << phone << endl;
  }

  void Customer:: getEmail()
  {
    cout << "Email: " << email << endl;
  }
  
  void Customer::PrintInfo()
 {
    cout << "Account Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << fname << " " << lname << endl;
    cout << "Adress: " << adress << endl;
    cout << "Phone: " << phone << endl;
    cout << "email: " << phone << endl;
 }
