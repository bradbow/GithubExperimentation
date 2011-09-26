#include "Account.h"
#include <string>
using std::string;

#ifndef _CREDIT_ACCOUNT_H
#define _CREDIT_ACCOUNT_H 

class CreditAccount :
	public Account
{
public:
	CreditAccount(	int accountID,
					string accountName,
					double interestRate,
					double balance,
					double overdraftLimit);
	~CreditAccount(void);

	double getOverdraftLimit(void);
	void setOverdraftLimit(double amount);
	void incrementBalance(double amount);
	void decrementBalance(double amount);

private:
	double _overdraftLimit;
	
};

#endif
