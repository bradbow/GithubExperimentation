#include "AccountServices.h"
#include <sstream>
using std::stringstream;

AccountServices::AccountServices(void)
{
}


AccountServices::~AccountServices(void)
{
}

Account *AccountServices::createAccount(accountType type, string details[]){

	switch(type){
		
	case SAVINGS:
		savingsCounter++;
		return new Account_Savings(
			startingBalance,
			savingsInterestRate);
	case CREDIT:
		creditCounter++;
		return new Account_Credit(
			startingBalance,
			CREDIT_REPAYMENT_RATE,
			creditOverdraftLimit);
	case HOME_LOAN:
		homeLoanCounter++;
		return new Account_HomeLoan(
			startingBalance,
			details[0],
			WEEKLY, //TODO : exchange placeholder
			HOME_LOAN_MIN_REPAYMENT
			);
	}
}

string AccountServices::generateAccountNumber(accountType type){

	string accountNumber = intToStr(type);
	string lastDigits = generateLastDigits(type);

	for (int i = 1; i < (int)(ACC_NUMBER_LENGTH - lastDigits.length()); i++){
		
		accountNumber += intToStr(0);
	}
	accountNumber += lastDigits;
	return accountNumber;
}

string AccountServices::generateLastDigits(accountType type){

	switch(type){
	case SAVINGS:
		return intToStr(savingsCounter);
	case CREDIT:
		return intToStr(creditCounter);
	case HOME_LOAN:
		return intToStr(homeLoanCounter);
	}
}

string AccountServices::intToStr(int toConvert){

	string str;
	stringstream out;
	out << (int)toConvert;
	return out.str();
}


