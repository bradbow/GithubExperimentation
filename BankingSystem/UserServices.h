#include "User.h"
#include "User_Customer.h"
#include "User_BankClerk.h"

#ifndef _USER_SERVICES_H
#define _USER_SERVICES_H

class UserServices
{
public:
	enum userType { CUSTOMER, BANK_CLERK };
	UserServices(void);
	~UserServices(void);
	User *createUser(userType type, string details[]);
	
private:
	string generatePassword(void);
	static const int MIN_PASSWORD_LENGTH = 6;
};
#endif

