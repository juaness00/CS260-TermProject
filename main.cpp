#include <iostream>
#include <string>
#include "savings.h"
#include "checking.h"
#include "customer.h"
#include "utils.h"
using namespace std;


int main()
{
    const int ACCOUNT_ARRSIZE = 5;
    bool currentAvaliableSavingsIndexes[ACCOUNT_ARRSIZE];
    bool currentAvaliableCheckingIndexes[ACCOUNT_ARRSIZE];
    int CUSTOMER_ARRSIZE = 10;
    int current_customer_index = 0;
    SavingsAccount savingsArr[ACCOUNT_ARRSIZE];
    CheckingAccount checkingArr[ACCOUNT_ARRSIZE];
    Customer customerArr[CUSTOMER_ARRSIZE];;
    Customer currentCustomer;
    int menuOption;
    int accountNumber, transferTo, transferFrom;
    string username, password;
    ifstream infile;
    ofstream outfile;
    for(int i=0; i < ACCOUNT_ARRSIZE; i++){
        currentAvaliableCheckingIndexes[i] = true;
        currentAvaliableSavingsIndexes[i] = true;
    }
    do{
        cout << "welcome to the Bank Menu\n1. login \n2. create an account \n3. admin\nEnter 0 to exit\nAt any point but the main menu, enter 'exit' to return to this menu\noption: ";
        getMenuOption(menuOption);
        cout << "\n\n\n\n";
        switch(menuOption){
            case 1:
                currentCustomer = loginCustomer(customerArr,CUSTOMER_ARRSIZE);
                if (!currentCustomer.isEmpty()){
                    do{
                        cout << "Welcome " << currentCustomer.getfName() << " " << currentCustomer.getlName() << endl;
                        cout << "here are your menu options:\n1. show account and customer information\n2. deposit to account\n3. withdraw from account\n4. show total balance\n5. tranfer to another account\n6. create an account\n0. Enter 0 to log out\n";
                        cout << "option: ";
                        getMenuOption(menuOption);
                        cout << "\n\n\n\n";
                        switch (menuOption)
                        {
                        case 1:
                            currentCustomer.PrintInfo();
                            showCustomerAccounts(currentCustomer.getUser(),savingsArr,checkingArr,ACCOUNT_ARRSIZE,false);
                            cout << "\n\n\n\n";
                            break;

                        case 2:
                            if(currentCustomer.hasAnAccount()){
                                cout << "Here are your accounts:\n";
                                showCustomerAccounts(currentCustomer.getUser(),savingsArr,checkingArr,ACCOUNT_ARRSIZE,false);
                                cout << "enter the account id of the account you wish to deposit to\n";
                                cout << "account #";
                                cin >> accountNumber;
                                while(cin.fail()){
                                    cin.clear();
                                    cin.ignore(1000, '\n');
                                    cout << "Invalid value, please try again.\n";
                                    cout << "value: ";
                                    cin >> accountNumber;
                                }
                                depositToAccount(currentCustomer.getUser(),savingsArr,checkingArr,ACCOUNT_ARRSIZE,accountNumber);
                            }else cout << "You do not have an account yet, create one first\n";
                            cout << "\n\n\n\n";
                            break;
                           
                        case 3:
                            if(currentCustomer.hasAnAccount()){
                                cout << "Here are your accounts:\n";
                                showCustomerAccounts(currentCustomer.getUser(),savingsArr,checkingArr,ACCOUNT_ARRSIZE,false);
                                cout << "enter the account id of the account you wish to withdraw from\n";
                                cout << "account #";
                                cin >> accountNumber;
                                while(cin.fail()){
                                    cin.clear();
                                    cin.ignore(1000, '\n');
                                    cout << "Invalid value, please try again.\n";
                                    cout << "value: ";
                                    cin >> accountNumber;
                                }
                                withdrawnFromAccount(currentCustomer.getUser(),savingsArr,checkingArr,ACCOUNT_ARRSIZE,accountNumber);
                            }else cout << "You do not have an account yet, create one first\n";
                            cout << "\n\n\n\n";
                            break;
                        
                        case 4:
                            if(currentCustomer.hasAnAccount()){
                                showTotalBalance(currentCustomer.getUser(),savingsArr,checkingArr,ACCOUNT_ARRSIZE);
                            }else cout << "You do not have an account yet, create one first\n";
                            cout << "\n\n\n\n";
                            break;
                           
                        case 5:
                            if(currentCustomer.hasAnAccount()){
                                cout << "Here are your accounts:\n";
                                showCustomerAccounts(currentCustomer.getUser(),savingsArr,checkingArr,ACCOUNT_ARRSIZE,false);
                                cout << "enter the account id of the account you wish to transfer from\n";
                                cout << "account #";
                                cin >> transferFrom;
                                while(cin.fail()){
                                    cin.clear();
                                    cin.ignore(1000, '\n');
                                    cout << "Invalid value, please try again.\n";
                                    cout << "value: ";
                                    cin >> transferFrom;
                                }
                                cout << "enter the account id of the account you wish to transfer to\n";
                                cout << "account #";
                                cin >> transferTo;
                                while(cin.fail()){
                                    cin.clear();
                                    cin.ignore(1000, '\n');
                                    cout << "Invalid value, please try again.\n";
                                    cout << "value: ";
                                    cin >> transferTo;
                                }
                                transferBetweenAccounts(currentCustomer.getUser(),savingsArr,checkingArr,ACCOUNT_ARRSIZE,transferTo,transferFrom);
                            }else cout << "You do not have an account yet, create one first\n";
                            cout << "\n\n\n\n";
                            break;
                            
                        case 6:
                            cout <<"please select account type\n1. savings\n2. checking\n";
                            cout << "option: ";
                            getMenuOption(menuOption);
                            switch (menuOption)
                            {
                            case 1:
                                createNewAccount("savings", currentCustomer,savingsArr,checkingArr,ACCOUNT_ARRSIZE,currentAvaliableSavingsIndexes,currentAvaliableCheckingIndexes);
                                cout << "account created successfully!\n";
                                cout << "\n\n\n\n";
                                break;
                            
                            case 2:
                                createNewAccount("checking", currentCustomer,savingsArr,checkingArr,ACCOUNT_ARRSIZE,currentAvaliableSavingsIndexes,currentAvaliableCheckingIndexes);
                                cout << "account created successfully!\n";
                                cout << "\n\n\n\n";
                                break;
                            
                            default:
                                if(menuOption !=0)
                                cout << "\nOption invalid, please try again.\n";
                            }
                            cout << "\n\n\n\n";
                            break;
                        default:
                            if(menuOption !=0)
                            cout << "\nOption invalid, please try again.\n";
                        }
                    }while(menuOption != 0);
                }
                menuOption = 1;
                break;
            case 2:
                createNewCustomer(customerArr,current_customer_index,CUSTOMER_ARRSIZE);
                cout << "\n\n\n\n";
                break;
            case 3:
                if(IsExit(username,"user: ")){
                    break;
                }
                if(IsExit(password,"pass: ")){
                    break;
                }
                do{
                    if(loginAdmin(username,password)){
                        cout << "Welcome admin, here are your options:\n1. Show all customers and accounts\n2. get text file of all customers and accounts\n0. log out\noption: ";
                        getMenuOption(menuOption);
                        cout << "\n\n\n\n";
                        switch (menuOption)
                        {
                        case 1:
                            adminShowCustomers(customerArr,CUSTOMER_ARRSIZE,savingsArr,checkingArr,ACCOUNT_ARRSIZE);
                            cout << "\n\n\n\n";
                            break;
                        case 2:
                            adminTextCustomers(customerArr,CUSTOMER_ARRSIZE,savingsArr,checkingArr,ACCOUNT_ARRSIZE,"/Users/emanuelespitia/Library/CloudStorage/OneDrive-JacksonvilleUniversity/Sophmore 1st/CS-260/term project//customers.txt");
                            cout << "\n\n\n\n";
                            break;
                        default:
                            if(menuOption !=0)
                            cout << "\nOption invalid, please try again.\n";
                        }
                    }
                }while(menuOption !=0);
                menuOption=3;
                break;
            default:
                if(menuOption !=0)
                cout << "\nOption invalid, please try again.\n";
        }
    }while(menuOption != 0);
    return 0;

}



