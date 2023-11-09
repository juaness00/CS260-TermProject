#include "checking.h"

CheckingAccount::CheckingAccount(): Account()
{
    overDraftLimit = 100.00;
}

CheckingAccount::CheckingAccount(Customer customer, double _balance, double _overDraftLimit)
{
    Account(customer,_balance);
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
