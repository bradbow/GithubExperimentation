
#ifndef _ACCOUNT_HOME_LOAN_H
#define _ACCOUNT_HOME_LOAN_H 

#include "account.h"
class Account_HomeLoan :
	public Account
{
public:
	Account_HomeLoan(
		float startingBalance,
		string propertyAddress,
		string repaymentOption,
		float minimumRepayment);

	~Account_HomeLoan(void);
	string getPropertyAddress();
	double getInterestRate();
	string getRepaymentOption();
	float getMinimumRepayment();
	void makeRepayment(float amount);

private:
	string _propertyAddress;
	double _interestRate;
	string _repaymentOption;
	float _minimumRepayment;

};
#endif

