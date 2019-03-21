#pragma once
#include "Product.h"
#include <iostream>
using namespace std;
#include <string>

class Boek : public Product
{
private:
	string titel;
	string auteur;
public:
	string getTitel();
	void setTitel(string vTitel);
	string getAuteur();
	void setAuteur(string vAuteur);
	Boek();
	Boek(string vTitel, string vAuteur, string vProductNaam);
	~Boek();
};

