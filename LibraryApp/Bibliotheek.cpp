#include "Bibliotheek.h"



void Bibliotheek::initDummyValues()
{
	Klant k1 = Klant("Imanuel", "123");
	Klant k2 = Klant("Tom", "azerty");
	Boek b1 = Boek("Titel1", "Auteur1", "ProductNaam1");
	Boek b2 = Boek("Titel2", "Auteur2", "ProductNaam2");
	Boek b3 = Boek("Titel3", "Auteur3", "ProductNaam3");
	Boek b4 = Boek("Titel4", "Auteur4", "ProductNaam4");
	Boek b5 = Boek("Titel5", "Auteur5", "ProductNaam5");
	Boek b6 = Boek("Titel6", "Auteur6", "ProductNaam6");
	Uitlening u1 = Uitlening(k1, b1);
	Uitlening u2 = Uitlening(k1, b2);
	Uitlening u3 = Uitlening(k1, b3);
	Uitlening u4 = Uitlening(k2, b4);
	Uitlening u5 = Uitlening(k2, b5);
	Uitlening u6 = Uitlening(k2, b6);
	this->addUitlening(u1);
	this->addUitlening(u2);
	this->addUitlening(u3);
	this->addUitlening(u4);
	this->addUitlening(u5);
	this->addUitlening(u6);
	this->addKlant(k1);
	this->addKlant(k2);
	this->addBoek(b1);
	this->addBoek(b2);
	this->addBoek(b3);
	this->addBoek(b4);
	this->addBoek(b5);
	this->addBoek(b6);

}

void Bibliotheek::showUitleningen()
{
	cout << "Uitleningen: " << endl;
	cout << setw(4) << "uiID" << setw(6) << "uID" << setw(10) << "Naam" << setw(6) << "pID" <<  setw(12) <<"Titel" << endl;
	for (auto x : getLijstUitleningen()) {
		cout << setw(4) << x.getUitleningID() << setw(6) << x.getKlant().getUserID() << setw(10) << x.getKlant().getNaam() << setw(6) << x.getBoek().getProductID() << setw(12) << x.getBoek().getTitel() << endl;
	}
}

void Bibliotheek::showKlanten()
{
	cout << "Klanten: " << endl;
	cout << setw(3) << "uID" << setw(10) << "Usernaam" << setw(14) << "Passwoord" << setw(12) << endl;
	for (auto x : getLijstKlanten()) {
		cout << setw(3) << x.getUserID() << setw(10) << x.getNaam() << setw(14) << x.getPasswoord() << setw(12) << endl;
	}
}

void Bibliotheek::showBoeken()
{
	cout << "Boeken: " << endl;
	cout << setw(3) << "pID" << setw(16) << "ProductNaam" << setw(10) << "Titel" << setw(10) << "Auteur" << endl;
	for (auto x : getLijstBoeken()) {
		cout << setw(3) << x.getProductID() << setw(16) << x.getProductNaam() << setw(10) << x.getTitel() << setw(10) << x.getAuteur() << endl;
	}
}

void Bibliotheek::showUitleningenByUserID(int vUserID) // console-bound
{
	vector<Uitlening> temp;
	for (auto x : getLijstUitleningen()) {
		if (x.getKlant().getUserID() == vUserID) {
			temp.push_back(x);
		}
	}
	for (auto y : temp) {
		cout << y.getUitleningID() << ") " << y.getBoek().getTitel() << " is uitgeleend aan: " << y.getKlant().getNaam() << endl;
	}
}

void Bibliotheek::showUitleningenByUserName(string vUserName) // console-bound
{
	vector<Uitlening> temp;
	for (auto x : getLijstUitleningen()) {
		if (x.getKlant().getNaam() == vUserName) {
			temp.push_back(x);
		}
	}
	for (auto y : temp) {
		cout << y.getUitleningID() << ") " << y.getBoek().getTitel() << " is uitgeleend aan: " << y.getKlant().getNaam() << endl;
	}
}

vector<Uitlening> Bibliotheek::getLijstUitleningen()
{
	return lijstUitleningen;
}

vector<Klant> Bibliotheek::getLijstKlanten()
{
	return lijstKlanten;
}

vector<Boek> Bibliotheek::getLijstBoeken()
{
	return lijstBoeken;
}

void Bibliotheek::addUitlening(Uitlening vUitlening)
{
	this->lijstUitleningen.push_back(vUitlening);
}

void Bibliotheek::addKlant(Klant vKlant)
{
	this->lijstKlanten.push_back(vKlant);
}

void Bibliotheek::addBoek(Boek vBoek)
{
	this->lijstBoeken.push_back(vBoek);
}

Bibliotheek::Bibliotheek()
{
	initDummyValues();
}


Bibliotheek::~Bibliotheek()
{
}
