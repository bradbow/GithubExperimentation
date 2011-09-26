#include "CreditAccount.h"


CreditAccount::CreditAccount(	int accountID,
								string accountName,
								double interestRate,
								double balance,
								double overdraftLimit) :
										Account(accountID,
												accountName, 
												interestRate,
												balance),
								_overdraftLimit(overdraftLimit)
{
}


CreditAccount::~CreditAccount(void)
{
}

double CreditAccount::getOverdraftLimit(void){

	return _overdraftLimit;
}
void CreditAccount::setOverdraftLimit(double amount){

	_overdraftLimit = amount;
}

void CreditAccount::incrementBalance(double amount){

	_balance += amount;
}
void CreditAccount::decrementBalance(double amount){

	_balance -= amount;
}