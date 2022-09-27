#include "User.h"
#include <iostream>

User::User(std::string firstName, std::string lastName) {
	_firstName = firstName;
	_lastName = lastName;
};

std::string User::getFirstName() {
	return _firstName;
};

std::string User::getLastName() {
	return _lastName;
};