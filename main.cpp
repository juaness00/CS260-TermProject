#include <iostream>
#include <string>
#include "savings.h"
#include "checking.h"
#include "customer.h"
using namespace std;

const int ACCOUNT_ARRSIZE = 100;
int CUSTOMER_ARRSIZE = 10;
int current_customer_index = 0;
static SavingsAccount savingsArr[ACCOUNT_ARRSIZE] = {};
static CheckingAccount checkingArr[ACCOUNT_ARRSIZE] = {};
static Customer customerArr[CUSTOMER_ARRSIZE] = {};

int createNewAccount(string type,string username,customer &arr){
    for(int i = 0; i < CUSTOMER_ARRSIZE; i++){
    }
    if(type == "savings"){
        SavingsAccount tempAccount;
    }else if (type == "checking"){
        CheckingAccount tempAccount;
    }
}

int createNewCustomer(string _fname, string _lname, string _address, string _phone, string _email, string username, string password){
    if (max_customers <= 0){
        cout << "Max customers reached\n";
        return 500;
    }
    Customer tempCustomer(_fname, _lname, _address, _phone, _email);
    customerArr[current_customer_index] = tempCustomer;
    return tempCustomer.getID();
}




int main()
{
    const string adminUser = "admin";
    const string adminPass = "admin123";

    int menuOption;
    string username, password;
    do{
        cout <<"\n\n<------------------------------------------------------>\n\n";
        cout << "welcome to the Bank Menu\n1. login \n2. create an account \n3. admin\nEnter 0 to exit\noption: ";
        cin >> menuOption;
        while(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option, please try again.\n";
            cout << "option: ";
            cin >> menuOption;
        }
        switch(menuOption){
            case 1:
                cout << "username: ";
                cin >> username;   
                if ()             
                break;
            case 2:
                cout << "You selected option 2\n";
                break;
            case 3:
                cout << "You selected option 3\n";
                break;
            default:
                if(menuOption !=0)
                cout << "\nOption invalid, please try again.\n";
        }
    }while(menuOption != 0);
    cout << "Goodbye :)\n";
    return 0;

}



