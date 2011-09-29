//User.cpp
#include "User.h"

// constructor
// precondition: valid user details passed in
// postcondition: user is created
User::User(int userName, string password) :
_userName(userName), _password(password)
{
}

// destructor
// precondition: none
// postcondition: memory deallocated
User::~User(void)
{
}

// precondition: none
// postcondition: userName returned
int User::getUserName(){

	return _userName;
}
