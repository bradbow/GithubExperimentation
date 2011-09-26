#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(	int accountID,
								string accountName, 
								double interestRate,
								double balance) :
								Account(accountID,
										accountName,
										interestRate,
										balance)
{

}


SavingsAccount::~SavingsAccount(void)
{
}

void SavingsAccount::incrementBalance(double amount){

	_balance += amount;
}
void SavingsAccount::decrementBalance(double amount){

	_balance -=amount;
}