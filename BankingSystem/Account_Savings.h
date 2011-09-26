
#ifndef _ACCOUNT_SAVINGS_H
#define _ACCOUNT_SAVINGS_H 

#include "account.h"
class Account_Savings :
	public Account
{
public:
	Account_Savings(float startingBalance, double interestRate);
	~Account_Savings(void);

	double getInterestRate();
	void debit(float amount);
	void credit(float amount);	

private:
	double _interestRate;

};
#endif
