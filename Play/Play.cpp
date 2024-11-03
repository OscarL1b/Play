#include <iostream>
#include "Army.h"
#include <Windows.h>
#include <vector>
using namespace std;

void SetSettingConsole();
vector < Army* > Opponents(vector < string > rareCom, vector < string > epicCom, vector < string > legendaryCom);
void Menu_Push_Army();

int main()
{
	SetSettingConsole();

	vector < string > rareCommander = {"Играций Мосцицкий", "Лотар Рендулич", "Омар Брэдли", "Джордж Паттон"};
	vector < string > epicCommander = {"Шарль де Голль", "Константин Рокоссовский", "Дуглас Макартур", "Джордж Джиффард"};
	vector < string > legendaryCommander = {"Георгий жуков", "Эрих фон Манштейн", "Георг Ханс Райнхардт", "Ханс Гюнтер фон Клюге"};
	vector < Army* > opponents = Opponents(rareCommander, epicCommander, legendaryCommander);
	string userNameCountry;
	Army* userArmy = new Army;
	bool flag = true;
	int choiseMenu;
	vector < string > userCom;
	static int pointForPushArmy = 100;
	
	cout << "---------  ---------" << endl;
	cout << "Введите название вашей страны: ";
	cin >> userNameCountry;
	cout << "Вам в подарок достаётся редкий командир! " << endl;
	cout << rareCommander[1] << endl;

	userArmy->Fill(userNameCountry, rareCommander[1], 1000, 0, 0, 0);

	cout << "Ваша армия: " << endl;
	userArmy->Print();

	userCom.push_back(rareCommander[1]);

	while (flag)
	{
		cout << "------ Меню ------" << endl;
		cout << "1. Напасть на страну." << endl
			<< "2. Увеличить армию." << endl
			<< "3. Открыть бокс." << endl;
		cin >> choiseMenu;

		switch (choiseMenu)
		{
		case 1:



		case 2:

			int variantMenu;

			cout << "Ваши поинты добавления армии " << pointForPushArmy << endl;

			Menu_Push_Army();
			cout << ">>> " << endl;
			cin >> variantMenu;

			switch (variantMenu)
			{
				int quantityPushArmy = 0;

			case 1:

				cout << "Цена 1 поинт за 1 пехотинца." << endl;
				cout << "Введите сколько хотите добавить пехоты: ";
				cin >> quantityPushArmy;

				if (quantityPushArmy % 1 <= pointForPushArmy)
				{
					userArmy->SetInfantry(quantityPushArmy);
					pointForPushArmy -= (quantityPushArmy * 1);
				}

				quantityPushArmy = 0;

				break;

			case 2:

				cout << "Цена 10 поинтов за 1 танк. " << endl;
				cout << "Введите сколько хотите добавить танков: ";
				cin >> quantityPushArmy;

				if (quantityPushArmy % 10 <= pointForPushArmy)
				{
					userArmy->SetTanks(quantityPushArmy);
					pointForPushArmy -= (quantityPushArmy * 1);
				}

				quantityPushArmy = 0;

				break;

			case 3:

				cout << "Цена 3 поинта за 1 снайпера. " << endl;
				cout << "Введите сколько хотите добавить снайперов: ";
				cin >> quantityPushArmy;

				if (quantityPushArmy % 3 <= pointForPushArmy)
				{
					userArmy->SetSnipers(quantityPushArmy);
					pointForPushArmy -= (quantityPushArmy * 1);
				}

				quantityPushArmy = 0;

				break;

			case 4:

				cout << "Цена 5 поинтов за 1 артилерию. " << endl;
				cout << "Введите сколько хотите добавить артилерии: ";
				cin >> quantityPushArmy;

				if (quantityPushArmy % 3 <= pointForPushArmy)
				{
					userArmy->SetSnipers(quantityPushArmy);
					pointForPushArmy -= (quantityPushArmy * 1);
				}

				quantityPushArmy = 0;

				break;

			case 5:
				continue;

			default:

				cerr << "Такого выбора нет! " << endl;
				break;
			}

		default:
			break;
		}
	}
	
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
	opponents.back()->Fill("Вильвия", rareCom[0], 1000, 0, 0, 0);
	opponents.push_back(new Army());
	opponents.back()->Fill("Фатумланд", epicCom[1], 2000000, 700, 1800, 6400);
	opponents.push_back(new Army());
	opponents.back()->Fill("Рейв", epicCom[2], 2200000, 1000, 2300, 6500);
	opponents.push_back(new Army());
	opponents.back()->Fill("Ливон", epicCom[1], 4, 6, 7, 8);

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

void Menu_Push_Army()
{
	cout << "Выберите кого хотите добавить:" << endl;
	cout << "1. Добавить пехоту."
		<< " 2. Добавить танки."
		<< "3. Добавить снайперов."
		<< "4. Добавить артилерию."
		<< "5. Назад." << endl;
	
}