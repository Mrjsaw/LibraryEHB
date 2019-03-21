#pragma once
using namespace std;
#include <iostream>
#include <string>
#include "Klant.h"
#include "Boek.h"
#include <vector>
#include <stdio.h>
#include <ctime>
using namespace std;


class Uitlening
{
private:
	static int newID;
	int uitLeningID;
	Klant klant;
	Boek boek;
	// TODO: add returnDate/currentDate
	
public:
	int getUitleningID();
	Klant getKlant();
	void setKlant(Klant vKlant);
	Boek getBoek();
	void setBoek(Boek vBoek);
	Uitlening();
	Uitlening(Klant vKlant, Boek vBoek);
	~Uitlening();
};

