#include "potato.h"


int main()
{
	login();
	game_start();
	music();
	while (1)
	{
		box();
		Sleep(1000);
		system("cls");
	}
}
