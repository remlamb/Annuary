#include "Repertory.h"
#include <iostream>
#include <cctype>
#include <algorithm>

void Repertory::addUser() {

	std::string firstName, lastName;
	std::cout << "Enter your Firstname : ";
	std::cin >> firstName;
	tolowerString(firstName);

	std::cout << "Enter your Lastname : ";
	std::cin >> lastName;
	tolowerString(lastName);

	std::string numbr;
	std::cout << "Enter your Number : ";
	std::cin >> numbr;

	_repertory.insert({ numbr, User(firstName, lastName)});
	
};

void Repertory::showRepertory() {
	for (auto nbr : _repertory) {
		std::cout << nbr.first << " is the number of : ";
		std::cout << nbr.second.getFirstName() << " " << nbr.second.getLastName() << "\n";
	}
};

void Repertory::searchUser() {
	std::string firstName, lastName;
	std::cout << "Enter the user's Firstname you're looking for  : ";
	std::cin >> firstName;
	tolowerString(firstName);

	std::cout << "Enter the user's Lastname you're looking for  : ";
	std::cin >> lastName;
	tolowerString(lastName);

	for (auto nbr : _repertory) {
		if (nbr.second.getFirstName() == firstName && nbr.second.getLastName() == lastName) {
			std::cout << firstName << " " << lastName << " Number : " << nbr.first << "\n";
		}
	}
};

void Repertory::startAnnuary() {

	while (currentChoice != '4') {
		std::cout << "Enter : \n" << "1 to add a User. \n" << "2 search User \n" << "3 print Annuary \n" << "4 end program \n";
		std::cin >> currentChoice;

		if (currentChoice == '1') {
			addUser();
		}
		else if (currentChoice == '2') {
			searchUser();
		}
		else if (currentChoice == '3') {
			showRepertory();
		}
		else if (currentChoice == '4') {
			return ;
		}
		else {
			std::cout << "Retry \n";
		}
	}
};

void Repertory::tolowerString(std::string& name) {
	for (auto& letter : name) {
		letter = tolower(letter);
	}
};
