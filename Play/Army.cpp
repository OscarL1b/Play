#include "Army.h"

Army::Army()
{
	
}

Army::Army(string parNameCountry, string parCommander, int parInfantry, int parTanks, int parSnipers, int parArtillery)
{
	this->nameCountry = parNameCountry;
	this->commander = parCommander;
	this->artillery = parArtillery;
	this->tanks = parTanks;
	this->snipers = parSnipers;
	this->infantry = parInfantry;
}


string Army::GetNameCountry()
{
	return this->nameCountry;
}

string Army::GetCommander()
{
	return this->commander;
}

int Army::GetInfantry()
{
	return this->infantry;
}

int Army::GetTanks()
{
	return this->tanks;
}

int Army::GetSnipers()
{
	return this->snipers;
}

int Army::GetArtilery()
{
	return this->artillery;
}

void Army::SetNameCountry(string parCountry)
{
	this->nameCountry = parCountry;
}

void Army::SetCommander(string parCommander)
{
	this->commander = parCommander;
}

void Army::SetInfantry(int parInfantry)
{
	this->infantry = parInfantry;
}

void Army::SetTanks(int parTanks)
{
	this->tanks = parTanks;
}

void Army::SetSnipers(int parSnipers)
{
	this->snipers = parSnipers;
}

void Army::SetArtilery(int parArtilery)
{
	this->artillery = parArtilery;
}
