#include "Account.h"
#include "Account_Savings.h"
#include "Account_HomeLoan.h"
#include "Account_Credit.h"

#ifndef _ACCOUNT_SERVICES_H
#define _ACCOUNT_SERVICES_H
#include <list>
using namespace std;

#include <string>
using std::string;

class AccountServices
{
public:
	enum accountType { SAVINGS, CREDIT, HOME_LOAN };
	enum repaymentOption { WEEKLY, F_NIGHTLY, MONTHLY };
	AccountServices(void);
	~AccountServices(void);
	Account *createAccount(accountType type, string details[]);
private:
	string generateAccountNumber(accountType type);
	string generateLastDigits(accountType type);
	string intToStr(int toConvert);
	static float startingBalance;
	double savingsInterestRate;
	static const int CREDIT_REPAYMENT_RATE = 0;
	float creditOverdraftLimit;
	static const int HOME_LOAN_MIN_REPAYMENT = 0;
	static const int ACC_NUMBER_LENGTH = 9;
	static int savingsCounter;
	static int creditCounter;
	static int homeLoanCounter;
};
#endif

