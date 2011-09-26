#include "Account_Savings.h"

Account_Savings::Account_Savings(float startingBalance, double interestRate) :
	Account(startingBalance), _interestRate(interestRate) 
{

}


Account_Savings::~Account_Savings(void)
{
}

double Account_Savings::getInterestRate(){

	return this->_interestRate;
}
