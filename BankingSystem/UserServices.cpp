// UserServices.cpp
// Provides services to add, remove, retrieve and modify user
// accounts. Uses the Singleton Pattern to ensure there is only
// ever one UserServices

#include <time.h>
#include "UserServices.h"

bool UserServices::instanceFlag = false;
UserServices* UserServices::_userServicesInstance = NULL;

// employs singleton pattern to ensure that there is only ever one
// AccountServices instance
// precondition: none
// postcondition: an AccountSerices is returned, if none is alreay
// available one is created then returned
UserServices *UserServices::instance(void){

	if(!instanceFlag){
	
		_userServicesInstance = new UserServices;
		instanceFlag = true;
		return _userServicesInstance;
	}		
	return _userServicesInstance;

}
// precondition: valid customer details passed in
// postcondition: customer created and added to applicationData
void UserServices::createCustomer(string name, string address, string phoneNumber{

	//Customer created(applicationData.nextCustomerName(), generatePassword(), name, address, phoneNumber);
	//applicationData.addUser(created);
}
// precondition: valid bank clerk details passed in
// postcondition: bank clerk created and added to applicationData
void UserServices::createBankClerk(){
	//BankClerk created(applicationData.nextBankClerkName(), generatePassword())
	//applicationData.addUser(created);
}
// precondition: none
// postcondition: validates userName and password pair
bool UserServices::validateUser(int username, string password){}
// precondition: valid userId passed in
// postcondition: exchanges old password for new one
void UserServices::UserServices::changePassword(int userId, string password){}
// precondition: valid userId and password pair passed in
// postconditon: password reset to new password which is then returned
string UserServices::resetPassword(int userID){}
// precondition: none
// returns true if user exists in application data, false otherwise
bool UserServices::userExists(int userID){}
// precondition: none
// postcondition: returns true if user matching userID is successfully
// deleted
bool UserServices::deleteUser(int userID){}
// precondition: valid user details passed in
// postcondition: old details are exchanged for new
void UserServices::updateCustomerDetails(string details[]){}
// precondition: valid userID passed in
// postcondition: user matching userID is returned
User UserServices::getUser(int userID){}


string UserServices::generatePassword(void){

	enum asciiType{NUMERAL, LOWER_CASE, UPPER_CASE};
	enum asciiBounds{LOWER_BOUND, UPPER_BOUND};
	int asciiBounds[UPPER_CASE][2];
	asciiBounds[NUMERAL][LOWER_BOUND] = 48;
	asciiBounds[NUMERAL][UPPER_BOUND] = 57;
	asciiBounds[LOWER_CASE][LOWER_BOUND] = 65;
	asciiBounds[LOWER_CASE][UPPER_BOUND] = 90;
	asciiBounds[UPPER_CASE][LOWER_BOUND] = 97;
	asciiBounds[UPPER_CASE][UPPER_BOUND] = 122;
	
	srand ( time(NULL) );
	int asciiType;

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		//TODO
	}
	string str = "";
	return str;
}


