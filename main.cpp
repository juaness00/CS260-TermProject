#include <iostream>
#include <string>
#include "savings.h"
#include "checking.h"
#include "customer.h"
using namespace std;



int createNewAccount(string type,string username,Customer arr[], int customerArrSize){
    for(int i = 0; i < customerArrSize; i++){
    }
    if(type == "savings"){
        SavingsAccount tempAccount;
    }else if (type == "checking"){
        CheckingAccount tempAccount;
    }
}

bool usernameExists(string username, Customer customerArr[], int customerArrSize) {
    for(int i = 0; i < customerArrSize; ++i) {
        if(customerArr[i].getUser() == username) {
            return true;
        }
    }
    return false;
}

bool createNewCustomer(string _fname, string _lname, string _address, string _phone, string _email, string username, string password, Customer customerArr[], int &current_customer_index, int customerArrSize) {
    if(current_customer_index >= customerArrSize) {
        cout << "Maximum number of customers reached.\\n";
        return false;
    }

    if(usernameExists(username, customerArr, current_customer_index)) {
        cout << "Username already exists. Please choose a different one.\\n";
        return false;
    }

    Customer tempCustomer(_fname, _lname, _address, _phone, _email, username, password);
    customerArr[current_customer_index] = tempCustomer;
    current_customer_index++;
    return true;
}



Customer findCustomerByUsername(string username, Customer customerArr[], int customerArrSize) {
    for(int i = 0; i < customerArrSize; ++i) {
        if(customerArr[i].getUser() == username) {
            return customerArr[i];
        }
    }
    return Customer();
}


int main()
{
    const int ACCOUNT_ARRSIZE = 100;
    int CUSTOMER_ARRSIZE = 10;
    int current_customer_index = 0;
    SavingsAccount savingsArr[ACCOUNT_ARRSIZE];
    CheckingAccount checkingArr[ACCOUNT_ARRSIZE];
    Customer customerArr[CUSTOMER_ARRSIZE];
    const string adminUser = "admin";
    const string adminPass = "admin123";
    Customer currentCustomer;
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
                currentCustomer = findCustomerByUsername(username,customerArr,CUSTOMER_ARRSIZE);
                if (currentCustomer.isEmpty()){
                    cout << "Sorry, the customer account " << username << " was not found, please select another option.\n";
                    break;
                }
                cout << "username found!\n";       
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



