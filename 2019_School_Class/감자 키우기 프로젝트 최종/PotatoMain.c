#include "potato.h"


int main()
{
	login();			// 로그인을 실행
	game_start();		// 게임이 시작되고
	music();			// 음악이 실행된다.
	while (1)
	{
		box();			// box()함수 안에서만 시간이 흐를수 있도록 하였다. 
		Sleep(1000);
		system("cls");
	}
}
