#include <iostream>
using namespace std;
#include "Bibliotheek.h"

int Uitlening::newID = 1000;
int User::newID = 200;
int Product::newID = 300;

int main() {
	Bibliotheek bib = Bibliotheek();
	bib.showUitleningen();
	cout << "------------------" << endl;
	bib.showKlanten();
	cout << "------------------" << endl;
	bib.showBoeken();
	cout << "------------------" << endl;
	bib.showUitleningenByUserID(201);
	cout << "------------------" << endl;
	bib.showUitleningenByUserName("Imanuel");
	return 0;
}
