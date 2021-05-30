#include <stdio.h>
#include<windows.h>
#include<time.h>
#include<conio.h>


int main()
{
	int month = 0;
	int day = 1;
	int sec;
	

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
		
		if (day == 30)
		{
			month++;
			day = 0;
			
		}
		
		if (month == 12)
		{
			printf("time out");
			Sleep(2000);
			return 0;
		}
		
		
		printf("▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
		printf("▣   %d 월 %d 일 시간 :%d", month, day ,time);        printf("          ▣\n");
		printf("▣                                                                            ▣\n");
		printf("▣                                                                            ▣\n");
		printf("▣                                                                            ▣\n");
		printf("▣                                                                            ▣\n");
		printf("▣                                                                            ▣\n");
		printf("▣                                                                            ▣\n");
		printf("▣                                                                            ▣\n");
		printf("▣                                                                            ▣\n");
		printf("▣                                                                            ▣\n");
		printf("▣                                                                            ▣\n");
		printf("▣                                                                            ▣\n");
		printf("▣                                                                            ▣\n");
		printf("▣                                                                            ▣\n");
		printf("▣                                                                            ▣\n");
		printf("▣                                                                            ▣\n");
		printf("▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
		Sleep(1000);
		system("cls");

	}
}


int time()
{
	int i = 0;
	i++;
	return i;
}