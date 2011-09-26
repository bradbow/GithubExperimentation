#include "User.h"


User::User(string userName, string password) :
_userName(userName), _password(password)
{
}


User::~User(void)
{
}

string User::getUserName(){

	return this->_userName;
}
string User::getPassWord(){
	
	return this->_password;
}
