#ifndef _USER_BANKCLERK_H
#define _USER_BANKCLERK_H 
#include "user.h"

class User_BankClerk :
	public User
{
public:
	User_BankClerk(string userName, string password);
	~User_BankClerk(void);

	void createAccount(void);
	void cancelAccount(void);
	void changePassword(string newPassword);
	void resetPassword(void);
	void changeCustomerInformation(void);

private:

};
#endif

