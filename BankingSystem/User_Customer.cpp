#include "User_Customer.h"


User_Customer::User_Customer(
	string userName,
	string password, 
	string address, 
	string phoneNumber) :
		User(userName, password),
			_address(address),
			_phoneNumber(phoneNumber){}


User_Customer::~User_Customer(void){}

// postcondition: displays a summary of accounts held
void User_Customer::displaySummary(void){
	//stub
}

// postcondition: displays specifics of one account 
void User_Customer::displayAccount(void){

	//stub
}

// postcondition: a new savings account is added to accounts held
void User_Customer::openSavingsAccount(){

	//stub
}

// postcondition: an amount is exchanged between accounts
void User_Customer::transfer(){

	//stub
}

// postcondition: the amount is added to an account
void User_Customer::deposit(){

	//stub
}

// postcondition: the amount is removed from an account
void User_Customer::withdraw(){

	//stub
}

// postcondition: displays all available transactions to this customer
void User_Customer::viewAvailableTransactions(){	
	
	//stub	
}

// postcondition: the old address is exchanged for the new one
void User_Customer::changeAddress(string newAddress){
	
	//exception handling req
	this->_address = newAddress;
}

// postcondition: the old phone number is exchanged for the new one
void User_Customer::changePhoneNumber(string newPhoneNumber){

	//exception handlingr req
	this->_phoneNumber = newPhoneNumber;
}

