#include "Army.h"
#include <iostream>
using namespace std;

void Army::Print()
{
	cout << "======== Армия " << this->nameCountry << " ========" << endl;
	cout << "Главнокомандующий: " << this->commander << endl;
	cout << "Пехота: " << this->infantry << endl;
	cout << "Танки: " << this->tanks << endl;
	cout << "Снайперы: " << this->snipers << endl;
	cout << "Артилерия: " << this->artillery << endl;
}

void Army::Fill(string NameCountry, string Commander, int Infantry, int Tanks, int Snipers, int Artillery)
{
	this->SetNameCountry(NameCountry);
	this->SetCommander(Commander);
	this->SetInfantry(Infantry);
	this->SetTanks(Tanks);
	this->SetSnipers(Snipers);
	this->SetArtilery(Artillery);
}
