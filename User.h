#pragma once
#include <string> 

class User
{
private:
	std::string _firstName;
	std::string _lastName;
public:

	User(std::string, std::string);
	std::string getFirstName();
	std::string getLastName();
};

