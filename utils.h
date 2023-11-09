#pragma once
#if !defined(UTILS_H)
#define UTILS_H
#include <iostream>
#include <string>
#include "savings.h"
#include "checking.h"
#include "customer.h"
using namespace std;

bool IsExit(string &var, string text){
    cout << text;
    cin >> var;
    if(var == "exit"){
        return true;
    }
    return false;
}


void createNewAccount(string type,Customer &customer, SavingsAccount *savingsArr,CheckingAccount *checkingArr, int arrSize, bool *avaliableSavings, bool *avaliableChecking){
    double deposit;
    if(type == "savings"){
        for(int i=0; i < arrSize; i++){
            if(avaliableSavings[i]){
                savingsArr[i].setCustomer(customer);
                cout << "Enter an initial deposit amount : $";
                cin >> deposit;
                while(cin.fail()){
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid value, please try again.\n";
                    cout << "value: ";
                    cin >> deposit;
                }
                savingsArr[i].deposit(deposit);
                savingsArr[i].printInfo(true);
                avaliableSavings[i] = false;
                customer.addedAccount();
                return;
            }
        }
        cout << "max account of accounts reached\n.";

    }else if (type == "checking"){
        for(int i=0; i < arrSize; i++){
            if(avaliableChecking[i]){
                checkingArr[i].setCustomer(customer);
                cout << "Enter an initial deposit amount : $";
                cin >> deposit;
                while(cin.fail()){
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid value, please try again.\n";
                    cout << "value: ";
                    cin >> deposit;
                }
                checkingArr[i].deposit(deposit);
                checkingArr[i].printInfo(true);
                avaliableChecking[i] = false;
                customer.addedAccount();
                return;
            }
        }
        cout << "max account of accounts reached\n.";
    }
}

bool usernameExists(string username, Customer *customerArr, int customerArrSize){
    for(int i = 0; i < customerArrSize; i++){
        if(customerArr[i].getUser() == username){
            return true;
        }
    }
    return false;
}

void createNewCustomer(Customer *customerArr, int &current_customer_index, int customerArrSize){
    if (current_customer_index >= customerArrSize){
        cout << "Maximum number of customers reached.\n";
        return;
    }

    string _fname, _lname, _address, _phone, _email, username, password;

    if(IsExit(_fname, "Enter first name: ")){
        return;
    }
    if(IsExit(_lname, "Enter last name: ")){
        return;
    };
    cout << "enter address: ";
    cin.ignore(1000,'\n');
    getline(cin,_address);
    if (_address == "exit"){
        return;
    }
    if(IsExit(_phone, "Enter phone number: ")){
        return;
    }
    if(IsExit(_email, "Enter email: ")){
        return;
    }
    if(IsExit(username, "Choose a username: ")){
        return;
    }

    while(usernameExists(username, customerArr, current_customer_index)){
        if(IsExit(username,"Username not available, please try again: ")){
            return;
        }
    }
    if(IsExit(password, "Choose a password: ")){
        return;
    }
    Customer tempCustomer(_fname, _lname, _address, _phone, _email, username, password);
    customerArr[current_customer_index] = tempCustomer;
    current_customer_index++;

    cout << "Customer created successfully. \n";
}



Customer loginCustomer(Customer *customerArr, int customerArrSize){
    string username, password;
    Customer tempCustomer;
    if(IsExit(username, "Enter username: ")){
        return Customer();
    }

    for(int i = 0; i < customerArrSize; i++){
        if(customerArr[i].getUser() == username){
            tempCustomer = customerArr[i];
        }
    }
    if(tempCustomer.isEmpty()){
        cout << "No user with that username found.\n";
        return Customer();
    }
    if(IsExit(password, "Enter password: ")){
        return Customer();
    }
    if(tempCustomer.getPassword() == password){
        return tempCustomer;
    }
    cout << "Incorrect Credentials\n";
    return Customer(); 

}

void showCustomerAccounts(string username, SavingsAccount *sAccounts, CheckingAccount *cAccounts, int arrSize, bool showCustomerInfo){
    bool found = false;
    for(int i=0; i < arrSize; i++){
        if(sAccounts[i].getUser() == username){
            cout << "Showing information of Saving account #" << sAccounts[i].getId() << endl;
            sAccounts[i].printInfo(showCustomerInfo);
            found = true;
        }
        if(cAccounts[i].getUser() == username){
            cout << "Showing information of checking account #" << cAccounts[i].getId() << endl;
            cAccounts[i].printInfo(showCustomerInfo);
            found = true;
        }
    }
    if(!found)
    cout << "No accounts found\n";

}

void getMenuOption(int &menuOption){
    cin >> menuOption;
    while(cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid option, please try again.\n";
        cout << "option: ";
        cin >> menuOption;
    }
}

void depositToAccount(string username, SavingsAccount *sAccounts, CheckingAccount *cAccounts, int arrSize,int id){
    double deposit;
    for(int i=0;i < arrSize; i++){
        if(sAccounts[i].getId() == id && sAccounts[i].getUser() == username){
            cout << "Enter amount to deposit to savings account #" << sAccounts[i].getId() << ": ";
            cin >> deposit;
            while(cin.fail()){
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid value, please try again.\n";
                cout << "value: ";
                cin >> deposit;
            }
            sAccounts[i].deposit(deposit);
            // cout << "New balance: $" << sAccounts[i]
        }else if(cAccounts[i].getId() == id && cAccounts[i].getUser() == username){
            cout << "Enter amount to deposit to checking account #" << cAccounts[i].getId() << ": ";
            cin >> deposit;
            while(cin.fail()){
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid value, please try again.\n";
                cout << "value: ";
                cin >> deposit;
            }
            cAccounts[i].deposit(deposit);
        }
    }
}

#endif
