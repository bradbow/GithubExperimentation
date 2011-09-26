#include "UserServices.h"


UserServices::UserServices(void)
{
}


UserServices::~UserServices(void)
{
}

User *UserServices::createUser(userType type, string details[]){

	switch(type){
	
	case CUSTOMER:
		return new User_Customer(
			details[0], 
			generatePassword(), 
			details[1], 
			details[2]);
		
	case BANK_CLERK:
		return new User_BankClerk(
			details[0],
			generatePassword());
	}
	return NULL;
}

string UserServices::generatePassword(void){

	string str = "";
	return str;
}


