#include "potato.h"

void stop()
{
	if (_kbhit()) // 특정키가 눌리면... 
	{
		if (getch() == 'z')  // 눌린키가 z 이면 스탑. 
			item();
	}
	system("cls");

	printf("stop...\n");
}