#include <string>
using std::string;

#ifndef _USER_H
#define _USER_H 

class User
{
public:
	User(string userName, string password);
	~User(void);
	string getUserName();
	string getPassWord();

private:
	string _userName;
	string _password;
};
#endif
