#include "Boek.h"



string Boek::getTitel()
{
	return titel;
}

void Boek::setTitel(string vTitel)
{
	this->titel = vTitel;
}

string Boek::getAuteur()
{
	return auteur;
}

void Boek::setAuteur(string vAuteur)
{
	this->auteur = vAuteur;
}

Boek::Boek()
{
}


Boek::Boek(string vTitel, string vAuteur, string vProductNaam) : Product(vProductNaam)
{
	this->titel = vTitel;
	this->auteur = vAuteur;
}

Boek::~Boek()
{
}
