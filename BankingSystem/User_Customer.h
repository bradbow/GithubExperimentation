#ifndef _USER_CUSTOMER_H
#define _USER_CUSTOMER_H 
#include "user.h"
class User_Customer :
	public User
{
public:
	User_Customer(
		string userName,
		string password,
		string address,
		string phoneNumber);

	~User_Customer(void);
	// postcondition: displays a summary of all accounts held
	void displaySummary();
	// postcondition: displays specifics of one account 
	void displayAccount();
	// postcondition: a new savings account is added to accounts held
	void openSavingsAccount();
	// postcondition: an amount is exchanged between accounts
	void transfer();
	// postcondition: the amount is added to this account
	void deposit();
	// postcondition: the amount is removed from this account
	void withdraw();
	// postcondition: displays all available transactions to this customer
	void viewAvailableTransactions();
	// postcondition: the old address is exchanged for the new one
	void changeAddress(string newAddress);
	// postcondition: the old phone number is exchanged for the new one
	void changePhoneNumber(string newPhoneNumber);

private:
	string _address;
	string _phoneNumber;
	//Collection accountsHeld
};
#endif

