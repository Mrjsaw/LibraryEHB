#include "User.h"



string User::getNaam()
{
	return naam;
}

void User::setNaam(string vNaam)
{
	this->naam = vNaam;

}

string User::getPasswoord()
{
	return passwoord;
}

void User::setPasswoord(string vPasswoord)
{
	this->passwoord = vPasswoord;
}

int User::getUserID()
{
	return userID;
}


User::User()
{
}

User::User(string vNaam, string vPasswoord) : userID(newID++)
{
	this->naam = vNaam;
	this->passwoord = vPasswoord;
}


User::~User()
{
}
