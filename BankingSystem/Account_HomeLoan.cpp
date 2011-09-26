#include "Account_HomeLoan.h"


Account_HomeLoan::Account_HomeLoan(
	float startingBalance,
	string propertyAddress,
	string repaymentOption,
	float minimumRepayment) :
		Account(startingBalance),
			_propertyAddress(propertyAddress),
			_repaymentOption(repaymentOption),
			_minimumRepayment(minimumRepayment)
{
}


Account_HomeLoan::~Account_HomeLoan(void)
{
}

string Account_HomeLoan::getPropertyAddress(){
	
	return this ->_propertyAddress;
}

string Account_HomeLoan::getRepaymentOption(){
	
	return this->_repaymentOption;
}

float Account_HomeLoan::getMinimumRepayment(){

	return this->_minimumRepayment;
}