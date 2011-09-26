#include <string>
using std::string;
#include "Account.h"

#ifndef _SAVINGS_ACCOUNT_H
#define _SAVINGS_ACCOUNT_H 


class SavingsAccount :
	public Account
{
public:
	SavingsAccount(int accountID,
					string accountName, 
                    double interestRate,
					double balance);
	~SavingsAccount(void);
	void incrementBalance(double amount);
	void decrementBalance(double amount);

private:

};
#endif
