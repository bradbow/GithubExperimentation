#include "Account.h"


Account::Account(int accountID,
				string accountName,
				double interestRate, 
				double balance){}


Account::~Account(void){}

int Account::getAccountID(void){

	return _accountID;
}

string Account::getAccountName(void){

	return _accountName;
}
void Account::setAccountName(string accountName){

	_accountName = accountName;
}
double Account::getInterestRate(void){

	return _interestRate;
}
void Account::setInterestRate(double interestRate){

	_interestRate = interestRate;
}
double Account::getBalance(void){

	return _balance;
}
