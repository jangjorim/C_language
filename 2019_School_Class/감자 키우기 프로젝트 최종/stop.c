#include "potato.h"

void item()
{
	int i = 0;
	system("cls");
	printf("1 \n 2\n");
	system("PAUSE");
	scanf("%d", &i);
	if (i == 2)
	{
		printf("성공");
	}
	Sleep(4000);

}

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

