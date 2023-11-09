#include "checking.h"

CheckingAccount::CheckingAccount(): Account()
{
    overDraftLimit = 100.00;
}

CheckingAccount::CheckingAccount(string _fName, string _lName, string _address, string _phone, string _email, int _id, double _balance, double _overDraftLimit): Account(_fName, _lName, _address, _phone, _email, _id, _balance)
{
    overDraftLimit = _overDraftLimit;
}

void CheckingAccount::Withdraw(double amount)
{
    if(amount <= balance)
    {
        balance = balance - amount;
        withdraws++;
    }
    
    else 
    {
         if((amount-balance) <= overDraftLimit)
         {
            balance = balance - amount -20;
            withdraws++;
            overDraftLimit = overDraftLimit + balance;
         }

         else 
         {
            cout <<"Transaction can not be completed, your balance is too low. " << endl;
         }
    }


}
