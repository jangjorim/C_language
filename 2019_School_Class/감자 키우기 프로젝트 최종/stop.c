#include "potato.h"

void stop()
{
	if (_kbhit()) // Ư��Ű�� ������... 
	{
		if (getch() == 'z')  // ����Ű�� z �̸� ��ž. 
			item();
	}
	system("cls");

	printf("stop...\n");
}