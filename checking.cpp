#include "checking.h"
CheckingAccount::CheckingAccount(string _fName, string _lName, string _address, string _phone, string _email, int _id, double _balance, double _overDraftLimit)
{
    Account(_fName, _lName, _address, _phone, _email, _id, _balance);
    overDraftLimit = _overDraftLimit;
}
