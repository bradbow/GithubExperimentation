
#ifndef _ACCOUNT_CREDIT_H
#define _ACCOUNT_CREDIT_H 

#include "account.h"
class Account_Credit :
	public Account
{
public:
	Account_Credit(
		float startingBalance,
		double repaymentInterestRate,
		float overdraftLimit);

	~Account_Credit(void);

	double getRepaymentInterestRate();
	float getOverdraftLimit();
	void credit(float amount);
	void makeRepayment(float amount);

private:
	double _repaymentInterestRate;
	float _overdraftLimit;
	
};

#endif
