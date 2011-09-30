// User.h

#include <string>
using std::string;

#ifndef _USER_H
#define _USER_H 

class User
{
public:
	friend class BankClerk;
	friend class Customer;
	friend class UserServices;
	
	// constructor
	// precondition: valid user details passed in
	// postcondition: user is created
	User(int userName, string password);
	// destructor
	// precondition: none
	// postcondition: memory deallocated
	~User(void);
	// precondition: none
	// postcondition: userName returnded
	int getUserName();

private:
	int _userName;
	string _password;
};
#endif
