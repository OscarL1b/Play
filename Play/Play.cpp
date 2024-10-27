#include <iostream>
#include "Army.h"
#include <Windows.h>
#include <vector>
using namespace std;

void SetSettingConsole();

int main()
{
	SetSettingConsole();

	vector < Army* > Opponents;

	Army* Opponent = new Army();
	Opponents.back()->Fill("Польша", "Мосцицкий", 5, 6, 3, 7);
	
	return 0;
}

void SetSettingConsole()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}
