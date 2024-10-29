#include <iostream>
#include "Army.h"
#include <Windows.h>
#include <vector>
using namespace std;

void SetSettingConsole();
vector < Army* > Opponents(vector < string > rareCom, vector < string > epicCom, vector < string > legendaryCom);

int main()
{
	SetSettingConsole();

	vector < string > rareCommander = {"Играций Мосцицкий", "Лотар Рендулич", "Омар Брэдли", "Джордж Паттон"};
	vector < string > epicCommander = {"Шарль де Голль", "Константин Рокоссовский", "Дуглас Макартур", "Джордж Джиффард"};
	vector < string > legendaryCommander = {"Георгий жуков", "Эрих фон Манштейн", "Георг Ханс Райнхардт", "Ханс Гюнтер фон Клюге"};
	vector < Army* > opponents = Opponents(rareCommander, epicCommander, legendaryCommander);
	
	return 0;
}

void SetSettingConsole()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}

vector < Army* > Opponents(vector < string > rareCom, vector < string > epicCom, vector < string > legendaryCom)
{
	vector < Army* > opponents;

	opponents.push_back(new Army());
	opponents.back()->Fill("Вильвия", rareCom[0], 900000, 220, 1000, 4300);
	opponents.push_back(new Army());
	opponents.back()->Fill("Фатумланд", "", 2000000, 700, 1800, 6400);
	opponents.push_back(new Army());
	opponents.back()->Fill("Рейв", "", 2200000, 1000, 2300, 6500);
	opponents.push_back(new Army());
	opponents.back()->Fill("Ливон", "", 4, 6, 7, 8);

	return opponents;
}

string Type_Army(string parCom)
{
	const int n = 3;
	string commanderInfantry[n] = { "Лотар Рендулич", "Шарль де Голль", "Ханс Гюнтер фон Клюге" };
	string commanderTanks[n] = { "Джордж Паттон", "Константин Рокоссовский", "Эрих фон Манштейн" };
	string commanderSnipers[n] = { "Играций Мосцицкий", "Шарль де Голль", "Георг Ханс Райнхардт" };
	string commanderArtillery[n] = { "Омар Брэдли", "Дуглас Макартур", "Георгий жуков" };

	for (short i = 0; i < n; i++)
	{
		if (commanderInfantry[i] == parCom)
			return "Пехота";
		else if (commanderTanks[i] == parCom)
			return "Танки";
		else if (commanderSnipers[i] == parCom)
			return "Снайперы";
		else if (commanderArtillery[i] == parCom)
			return "Артилерия";
	}
}
