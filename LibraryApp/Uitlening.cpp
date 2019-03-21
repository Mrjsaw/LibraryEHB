#include "Uitlening.h"



int Uitlening::getUitleningID()
{
	return uitLeningID;
}

Klant Uitlening::getKlant()
{
	return klant;
}

void Uitlening::setKlant(Klant vKlant)
{
	this->klant = vKlant;
}

Boek Uitlening::getBoek()
{
	return boek;
}

void Uitlening::setBoek(Boek vBoek)
{
	this->boek = vBoek;
}

Uitlening::Uitlening()
{
}

Uitlening::Uitlening(Klant vKlant, Boek vBoek) : uitLeningID(newID++)
{
	this->klant = vKlant;
	this->boek = vBoek;
}


Uitlening::~Uitlening()
{
}
