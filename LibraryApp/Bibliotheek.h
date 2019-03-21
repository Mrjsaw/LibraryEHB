#pragma once
#include <iostream>
#include <string>
#include "Uitlening.h"
#include <vector>
#include "User.h"
#include "Product.h"
#include <iomanip>
using namespace std;

class Bibliotheek
{
private:
	vector<Uitlening> lijstUitleningen; // uitleningen db
	vector<Klant> lijstKlanten; // user db
	vector<Boek> lijstBoeken; //product db
public:
	void initDummyValues(); //dummy values
	void showUitleningen();
	void showKlanten();
	void showBoeken();
	void showUitleningenByUserID(int vUserID);
	void showUitleningenByUserName(string vUserName);
	vector<Uitlening> getLijstUitleningen();
	vector<Klant> getLijstKlanten();
	vector<Boek> getLijstBoeken();
	void addUitlening(Uitlening vUitlening);
	void addKlant(Klant vKlant);
	void addBoek(Boek vBoek);
	Bibliotheek();
	~Bibliotheek();
};

