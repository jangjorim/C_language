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
		printf("����");
	}
	Sleep(4000);

}

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

