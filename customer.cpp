  #include "customer.h" 
 
 
  Customer::Customer()
  {

    fname = " ";
    lname = " ";
    address = " ";
    phone = " ";
    email = " "; 
    username = "";
    hasOneAccount = false;
    
  }


  Customer::Customer(string _fname, string _lname, string _address, string _phone, string _email, string _username, string _password)
  {
    fname = _fname;
    lname = _lname;
    address = _address;
    phone = _phone;
    email = _email;
    username = _username;
    hasOneAccount = false;
    password = _password;


  }

  void Customer::setDefault()
  {
    fname = " ";
    lname = " ";
    address = " ";
    phone = " ";
    email = " ";

  }
 
  void Customer::setAll(string _fname, string _lname, string _address, string _phone, string _email, string _username, string _password)
  {
    fname = _fname;
    lname = _lname;
    address = _address;
    phone = _phone;
    email = _email;
    username = _username;
    password = _password;

  }

  void Customer::setfName(string _fname)
  {
    fname = _fname;
  }
  
  void Customer:: setlName(string _lname)
  {
    lname = _lname;
  }
  
  void Customer::setAddress(string _address)
  {
    address = _address;
  }
  
  void Customer::setPhone(string _phone)
  {
    phone = _phone;
  }
  
  void Customer::setEmail(string _email)
  {
    email = _email;
  }

  void Customer:: setUser(string _username)
  {
    username = _username;
  }

  void Customer:: setPassword(string _password)
  {
    password = _password;
  }

  string Customer::getfName()
  {
    return fname;
  }

  string Customer:: getlName()
  {
    return lname;
  }

  string Customer::getAddress()
  {
    return address;
  }

  string Customer::getPhone()
  {
    return phone;
  }

  string Customer:: getEmail()
  {
    return email;
  }

  string Customer :: getUser()
  {
    return username;
  }
  string Customer ::getPassword()
  {
    return password;
  }
  
  void Customer::PrintInfo()
  {
    cout << "Account Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << fname << " " << lname << endl;
    cout << "Address: " << address << endl;
    cout << "Phone: " << phone << endl;
    cout << "email: " << email << endl;
  }

  bool Customer::isEmpty(){
    if (username == ""){
      return true;
    }
    return false;
  }

  bool Customer::hasAnAccount(){
    return hasOneAccount;
  }

  void Customer::addedAccount(){
    hasOneAccount = true;
  }

  void Customer::changePassword(string _password){
    password = _password;
  }

  void Customer::changeUsername(string _username){
    username = _username;
  }