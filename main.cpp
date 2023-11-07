#include <iostream>
#include <string>
#include "savings.h"
#include "checking.h"
using namespace std;

const int ARRSIZE = 10;
SavingsAccount savingsArr[ARRSIZE] = {};
CheckingAccount checkingArr[ARRSIZE] = {};

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

int getAccountArr(username){
    for(int i=0, i < ARRSIZE, i++){
        if(savingsArr[i].getUser() == username){

        }
    }
}
