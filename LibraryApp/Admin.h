#pragma once
using namespace std;
#include <iostream>
#include <string>
#include "User.h"

class Admin : public User
{
public:
	Admin();
	Admin(string vNaam, string vPasswoord);
	~Admin();
};

