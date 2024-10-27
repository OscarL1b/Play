#pragma once
#include <string>
using namespace std;

class Army
{
protected:
	string nameCountry = "";
	string commander = "";
	int infantry = 0;
	int tanks = 0;
	int snipers = 0;
	int artillery = 0;
	Army();
	Army(string parNameCountry, string parCommander, int parInfantry, int parTanks, int parSnipers, int parArtillery);

public:
	virtual void Print();
	virtual void Fill(string NameCountry, string Commander, int Infantry, int Tanks, int Snipers, int Artillery);
	string GetNameCountry();
	string GetCommander();
	int GetInfantry();
	int GetTanks();
	int GetSnipers();
	int GetArtilery();
	void SetNameCountry(string parCountry);
	void SetCommander(string patCommander);
	void SetInfantry(int parInfanty);
	void SetTanks(int parSetTanks);
	void SetSnipers(int parSnipers);
	void SetArtilery(int parArtilery);
};
