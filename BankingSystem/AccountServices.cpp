#include "AccountServices.h"
#include <sstream>
using std::stringstream;

AccountServices::AccountServices(void)
{
}


AccountServices::~AccountServices(void)
{
}

void getInstance(void);
SavingsAccount *AccountServices::createSavingsAccount (int accountID, string accountName, 
									double interestRate, double balance){

	return new SavingsAccount(	accountID, 
								accountName, 
								interestRate, 
								balance);
}
CreditAccount *AccountServices::createCreditCardAccount (int accountID, string accountName, 
                                   double interestRate, double balance,
								   double overdraftLimit){

	return new CreditAccount(	accountID,
								accountName, 
								interestRate, 
								balance, 
								overdraftLimit);
}
HomeLoanAccount *AccountServices::createHomeLoanAccount (int accountID, string accountName, 
                                   double interestRate, double balance,
                                   string propertyAddress, 
                                   HomeLoanAccount::repaymentOption option, 
								   double minimumRepayment){

	return new HomeLoanAccount(	accountID,
								accountName,
								interestRate,
								balance,
								propertyAddress,
								option,
								minimumRepayment);
}


void AccountServices::closeAccount(int accountID){

}
void AccountServices::changeAccountDetails(accountType type, string details[ ], int accountID){

}
Account getAccount(int accountID);
//void AccountServices::performTransaction(Transaction* account) throws Exception{}
//list<Account*> AccountServices::getCustomerAccounts(int customerID){}





