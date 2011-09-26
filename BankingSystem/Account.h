//some comments i added to account to test git
#include "Transaction.h"
#include <string>
using std::string;

#ifndef _ACCOUNT_H
#define _ACCOUNT_H 

class Account
{
public:
	
	friend class SavingsAccount;
	friend class CreditAccount;
	friend class HomeLoanAccount;
	enum accountType { SAVINGS, CREDIT, HOME_LOAN };

	Account(int accountID,
			string accountName,
			double interestRate, 
			double balance);
	~Account(void);
	int getAccountID(void);
	void setAccountName(string accountName);
	string getAccountName(void);
	double getInterestRate(void);
	void setInterestRate(double interestRate);
	double getBalance(void);

private:
	int _accountID;
	int _customerID;
	accountType _type;
	string _accountName;
	double _interestRate;
	double _balance;
};
#endif