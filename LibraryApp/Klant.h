#pragma once
using namespace std;
#include <iostream>
#include <string>
#include "User.h"

class Klant : public User
{
public:
	Klant();
	Klant(string vNaam, string vPasswoord);
	~Klant();
};

