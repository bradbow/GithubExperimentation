//some comments i added to account to test git
#include "Transaction.h"
#include <string>
using std::string;

#ifndef _ACCOUNT_H
#define _ACCOUNT_H 

class Account
{
public:

	friend class Account_Savings;

	Account(float balance);
	~Account(void);
	string getAccountNumber();
	string getAccountName();
	string getBalance();

private:
	string _accountNumber;
	string _accountName;
	float _balance;
};
#endif