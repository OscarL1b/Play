#include "Army.h"
#include <iostream>
using namespace std;

void Army::Print()
{
	cout << "======== ����� " << this->nameCountry << " ========" << endl;
	cout << "�����������������: " << this->commander << endl;
	cout << "������: " << this->infantry << endl;
	cout << "�����: " << this->tanks << endl;
	cout << "��������: " << this->snipers << endl;
	cout << "���������: " << this->artillery << endl;
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
