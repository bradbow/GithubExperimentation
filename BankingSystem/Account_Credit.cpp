#include "Account_Credit.h"


Account_Credit::Account_Credit(
		float startingBalance,
		double repaymentInterestRate,
		float overdraftLimit) :
			Account(startingBalance),
				_repaymentInterestRate(repaymentInterestRate),
				_overdraftLimit(overdraftLimit)
{
}


Account_Credit::~Account_Credit(void)
{
}

double Account_Credit::getRepaymentInterestRate(){
	
	return this->_repaymentInterestRate;
}

float Account_Credit::getOverdraftLimit(){
	
	return this->_overdraftLimit;
}