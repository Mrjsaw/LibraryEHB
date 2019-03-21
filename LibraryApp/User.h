#pragma once
using namespace std;
#include <iostream>
#include <string>
class User
{
private:
	static int newID;
protected:
	string naam;
	string passwoord;
	int userID;
public:
	string getNaam();
	void setNaam(string vNaam);
	string getPasswoord();
	void setPasswoord(string vPasswoord);
	int getUserID();
	User();
	User(string vNaam, string vPasswoord);
	~User();
};

