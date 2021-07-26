
#include <stdio.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
int main()
{
	while (1)
	{
		if (_kbhit())
		{
			char c;
			c = _getch();
			if (c == '0')
			{
				exit(0);
			}
		}

		printf("¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã\n");
		printf("¢Ã\n"); printf("½Ã°£ : %d", tim());
		printf("¢Ã                                                                            ¢Ã\n");
		printf("¢Ã                                                                            ¢Ã\n");
		printf("¢Ã                                                                            ¢Ã\n");
		printf("¢Ã                                                                            ¢Ã\n");
		printf("¢Ã                                                                            ¢Ã\n");
		printf("¢Ã                                                                            ¢Ã\n");
		printf("¢Ã                                                                            ¢Ã\n");
		printf("¢Ã                                                                            ¢Ã\n");
		printf("¢Ã                                                                            ¢Ã\n");
		printf("¢Ã                                                                            ¢Ã\n");
		printf("¢Ã                                                                            ¢Ã\n");
		printf("¢Ã                                                                            ¢Ã\n");
		printf("¢Ã                                                                            ¢Ã\n");
		printf("¢Ã                                                                            ¢Ã\n");
		printf("¢Ã                                                                            ¢Ã\n");
		printf("¢Ã                                                                            ¢Ã\n");
		printf("¢Ã                                                                            ¢Ã\n");
		printf("¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã¢Ã\n");

		
	}
}

int tim()
{
	while (1) {
		if (_kbhit())
		{
			char c;
			c = _getch();
			if (c == '0')
			{
				exit(0);
			}
		}

		return  clock() / 1000;
		Sleep(1000);
		system("cls");

		if (clock() / 1000 == 11)
			break;
	}
}