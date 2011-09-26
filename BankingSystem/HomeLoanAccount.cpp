#include "HomeLoanAccount.h"


HomeLoanAccount::HomeLoanAccount(	int accountID,
									string accountName, 
									double interestRate,
									double balance,
									string propertyAddress, 
									repaymentOption repaymentOption, 
									double minimumRepayment) :
									Account(accountID,
											accountName, 
											interestRate,
											balance),
									_propertyAddress(propertyAddress),
									_option(repaymentOption),
									_minimumRepayment(minimumRepayment)
{
}


HomeLoanAccount::~HomeLoanAccount(void)
{
}


string HomeLoanAccount::getPropertyAddress(void){

	return _propertyAddress;
}
void HomeLoanAccount::setPropertyAddress(string propertyAddress){

	_propertyAddress = propertyAddress;
}

HomeLoanAccount::repaymentOption HomeLoanAccount::getRepaymentOption(void){

	return _option;
}
void HomeLoanAccount::setRepaymentOption(repaymentOption option){

	_option = option;
}
double HomeLoanAccount::getMinimumRepayment(void){

	return _minimumRepayment;
}
void HomeLoanAccount::setMinimumRepayment(double amount){

	_minimumRepayment = amount;
}
void HomeLoanAccount::decrementBalance(double amount){

	_balance -= amount;
}
