// UserServices.h
// Provides services to add, remove, retrieve and modify user
// accounts. Uses the Singleton Pattern to ensure there is only
// ever one UserServices

#include "User.h"
#include "Customer.h"
#include "BankClerk.h"

#ifndef _USER_SERVICES_H
#define _USER_SERVICES_H

class UserServices
{
public:
	enum userType { CUSTOMER, BANK_CLERK };
	~UserServices(void){
		
		instanceFlag = false;
	}
	// employs singleton pattern to ensure that there is only ever one
	// AccountServices instance
	// precondition: none
	// postcondition: an AccountSerices is returned, if none is alreay
	// available one is created then returned
	UserServices *instance(void);
	// precondition: valid customer details passed in
	// postcondition: customer created and added to applicationData
	void createCustomer(string name, string address, string phoneNumber);
	// precondition: valid bank clerk details passed in
	// postcondition: bank clerk created and added to applicationData
	void createBankClerk();
	// precondition: none
	// postcondition: validates userName and password pair
	bool validateUser(int username, string password);
	// precondition: valid userId passed in
	// postcondition: exchanges old password for new one
	void changePassword(int userId, string password);
	// precondition: valid userId and password pair passed in
	// postconditon: password reset to new password which is then returned
	string resetPassword(int userID);
	// precondition: none
	// returns true if user exists in application data, false otherwise
	bool userExists(int userID);
	// precondition: none
	// postcondition: returns true if user matching userID is successfully
	// deleted
	bool deleteUser(int userID);
	// precondition: valid user details passed in
	// postcondition: old details are exchanged for new
	void updateCustomerDetails(string details[]);
	// precondition: valid userID passed in
	// postcondition: user matching userID is returned
	User getUser(int userID);

private:
	
	static bool instanceFlag;	
	static UserServices* _userServicesInstance;
	
	// precondition: none
	// postcondition: password generated of min password length
	string generatePassword(void);
	UserServices(void){}
	static const int PASSWORD_LENGTH = 6;
	
};
#endif

