#pragma once
#include <map>
#include "User.h"

class Repertory
{
public:
	std::map<std::string, User> _repertory; //marche pas si user en key parce qu il ne sait pas comment trier  // numero en string parce que int enleve le 1er 0
	char currentChoice;

	void addUser();
	void showRepertory();
	void searchUser();

	void startAnnuary();

	void tolowerString(std::string&); // converti les elements du string en minuscule pour faciliter la recherche de user

};

