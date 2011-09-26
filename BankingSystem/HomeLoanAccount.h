#include <string>
using std::string;
#include "Account.h"

#ifndef _HOME_LOAN_ACCOUNT_H
#define _HOME_LOAN_ACCOUNT_H 


class HomeLoanAccount :
	public Account
{
public:
	enum repaymentOption { WEEKLY, F_NIGHTLY, MONTHLY };

	HomeLoanAccount(	int accountID,
						string accountName, 
                        double interestRate,
						double balance,
                        string propertyAddress, 
                        repaymentOption repaymentOption, 
                        double minimumRepayment);

	~HomeLoanAccount(void);
	string getPropertyAddress(void);
	void setPropertyAddress(string propertyAddress);
	repaymentOption getRepaymentOption(void);
	void setRepaymentOption(repaymentOption option);
	double getMinimumRepayment(void);
	void setMinimumRepayment(double amount);
	void decrementBalance(double amount);

private:
	string _propertyAddress;
	repaymentOption _option;
	double _minimumRepayment;

};
#endif

