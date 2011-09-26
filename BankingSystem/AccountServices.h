#include "Account.h"
#include "SavingsAccount.h"
#include "HomeLoanAccount.h"
#include "CreditAccount.h"

#ifndef _ACCOUNT_SERVICES_H
#define _ACCOUNT_SERVICES_H
#include <list>
using namespace std;

#include <string>
using std::string;

class AccountServices
{
public:

	enum accountType{ SAVINGS_ACC, CREDIT_ACC, HOME_LOAN_ACC};

	AccountServices(void);
	~AccountServices(void);
	void getInstance(void);
	SavingsAccount *createSavingsAccount (int accountID, string accountName, 
                              double interestRate, double balance);
	CreditAccount *createCreditCardAccount (int accountID, string accountName, 
                                   double interestRate, double balance,
                                   double overdraftLimit);
	HomeLoanAccount *createHomeLoanAccount (int accountID, string accountName, 
                                   double interestRate, double balance,
                                   string propertyAddress, 
                                   HomeLoanAccount::repaymentOption option, 
                                   double minimumRepayment);


	void closeAccount(int accountID);
	void changeAccountDetails(accountType type, string details[ ], int accountID);
	Account getAccount(int accountID);
	//void performTransaction(Transaction* account) throws Exception;
	list<Account*> getCustomerAccounts(int customerID);

private:

};
#endif

