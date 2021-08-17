#include "potato.h"

//time
int day = 1;
int month = 3;
int i = 0;
int w = 0;  // 물 쿨타임 카운트
int j = 0; // 농약 쿨타임 카운트
int stopcount = 0; // 성공 종료 카운트


//list
int input = 10;
int ending[7] = { 0, };
int pcount = 0; //감자 심는 횟수 카운트
int wcount = 0; //물주는 카운트
int jcount = 0; // 농약 카운트


int box()
{
	for (double i = 0; i < 30; i++)
	{
		printf("■");
	}
	for (double i = 1; i < 20; i++)
	{
		gotoxy(59.5, i);
		printf("■");
	}
	for (int i = 1; i < 20; i++)
	{
		gotoxy(1, i);
		printf("■");

		if (i == 3)
		{
			gotoxy(5, i);
			time();
			gotoxy(50, i);
			printf("b.메뉴");
			p_print();

			gotoxy(50, 5);
			printf("물:%d", w);
			gotoxy(50, 7);
			printf("농약:%d", j);
			gotoxy(50, 9);

		}
	}
	for (int i = 1; i < 30; i++)
	{
		printf("■");
	}
	if (wcount == 1)
	{
		w++;

		if (w > 192) // 192
		{
			system("cls");
			printf("3.ending: 말라 죽은 감자(사유:감자에게 물을 오랜시간동안 안 주었다.)\n\n");
			printf("GAME OVER\n");
			Sleep(3000);
			printf("힌트가 추가 되었다.");
			w = 0;
			j = 0;

			pcount = 0;
			wcount = 0;
			jcount = 0;

			Sleep(1000);
			ending[2] = 1;
		}
	}

	if (jcount == 1)
	{
		j++;
		if (j > 720) // 720
		{
			system("cls");
			printf("5.ending: 흔적도 없이 사라진 감자(사유:병충해)\n\n");
			printf("GAME OVER\n");
			Sleep(3000);
			printf("힌트가 추가 되었다.");
			w = 0;
			j = 0;

			pcount = 0;
			wcount = 0;
			jcount = 0;

			Sleep(1000);
			ending[4] = 1;
			ending[6] = 1;
		}
	}

	if (pcount == 1 || pcount == 2 || pcount == 3)
	{
		if (wcount == 1 && jcount == 1)
		{
			for (i = 0; i < 7; i++) {
				if (!(ending[i] == 0))
					break;
			}
			stopcount++;
			if (stopcount > 10 && i == 7)
			{
				PlaySound(NULL, 0, 0);

				story();
			}
		}
	}

	return 0;
}


int time()
{

	while (1)
	{
		if (_kbhit()) // 특정키가 눌리면... 
		{
			if (getch() == 'b')  // 눌린키가 b 이면 스탑. 
			{
				list();
				system("cls");
			}
		}
		//Sleep(1000);
		i = i + 1;
		if (i == 25)
		{
			day = day + 1;
			i = 1;
		}
		if (day == 31)
		{
			day = 1;
			month += 1;
		}
		if (month == 8)
		{
			system("cls");
			printf("8 월 1 일 1시\n");
			Sleep(3000);
			printf("감자를 수확하기에는 너무 늦었습니다.\n");
			Sleep(4000);
			printf("인류의 마지막 프로젝트를 종료합니다.\n\n");
			exit(-1); //종료 함수
		}

		//system("cls");
		return printf("%d 월 %d 일 %d 시", month, day, i);
	}
}



void list()
{
	system("cls");

	while (1)
	{
		system("cls");
		gotoxy(65, 3);
		printf("0.나가기");
		gotoxy(10, 3);
		printf("1.씨감자 심기\n");

		if (pcount >= 1)
		{
			gotoxy(10, 5);
			printf("2.감자 물주기");
			gotoxy(10, 7);
			printf("3.감자 상태 확인하기");
			gotoxy(10, 9);
			printf("4.감자 농약주기");
			gotoxy(10, 11);
			printf("5.힌트 보기\n\n");
		}

		/////////////////////////////////////////////////////
		if (wcount >= 2)
		{
			if (192 > w && 168 < w && wcount == 2) //192 168
			{
				wcount = 1;
				w = 0;
				break;
			}
			else if (w < 168) // 168
			{
				system("cls");
				printf("2.ending: 뿌리가 썩은 감자(사유:물을 너무 많이 주었다.)\n\n");
				printf("GAME OVER\n");
				Sleep(3000);
				printf("힌트가 추가 되었다.");
				w = 0;
				j = 0;

				pcount = 0;
				wcount = 0;
				jcount = 0;

				Sleep(1000);
				ending[1] = 1;
				break;
			}

		}


		if (jcount >= 2)
		{
			if (744 > j && j > 720 && jcount == 2) // 744 720
			{
				jcount = 1;
				j = 0;
			}
			else if (j < 720) // 720
			{
				system("cls");
				printf("4.ending: 말라죽은 감자(사유:농약 과다 사용)\n\n");
				printf("GAME OVER\n");
				Sleep(3000);
				printf("힌트가 추가 되었다.");
				w = 0;
				j = 0;

				pcount = 0;
				wcount = 0;
				jcount = 0;

				Sleep(1000);
				ending[3] = 1;
				break;
			}
		}

		/*if (pcount >= 1 && wcount >= 1)
		{
			for (i = 0; i < 6; i++)
			{
				stopcount++;
				if (ending[i] == 1)
				{
					if (stopcount > 600)
					{
						system("cls");
						gotoxy(20, 3);
						printf("성공적으로 감자를 재배 하셨습니다.");
						Sleep(2000);
						gotoxy(20, 5);
						printf("신속히 재배한 감자를 전세계에 배포하여 주십시오.");
						Sleep(2000);
						printf("인류의 마지막 프로젝트를 종료합니다.");
						Sleep(2000);
						story();
					}
				}
			}
		}		system("PAUSE");*/

		scanf("%d", &input);

		if (input == 0)
		{
			system("cls");
			break;
		}
		if (input == 1)
		{
			system("cls");
			printf("씨감자를 심는중...");
			pcount++;
			Sleep(2000);
			if (pcount == 4)
			{
				system("cls");
				printf("1. ending: 괴생물체 출현(사유:밭이 엉망이 되었습니다.)\n\n");
				printf("GAME OVER\n");
				Sleep(3000);
				printf("힌트가 추가 되었다.");
				w = 0;
				j = 0;

				pcount = 0;
				wcount = 0;
				jcount = 0;

				Sleep(1000);
				ending[0] = 1;
				ending[5] = 1;
				break;
			}
			continue;
		}



		if (pcount > 0 && input != 0)
		{
			if (input == 2)
			{
				system("cls");
				printf("감자에 물을 뿌리는 중입니다...");
				wcount++;

				Sleep(1000);
				system("cls");
			}
			else if (input == 3)
			{
				system("cls");
				printf("감자의 상태를 확인합니다.");
				Sleep(1000);
				system("cls");
				printf("감자 확인 불가%uAC00%uB2A5....%uC774%uC2A4%uD130%20%uC560%uADF8...\n\n");
				Sleep(1500);
				printf("....");
				Sleep(1000);
				printf("시스템 오류로 되돌아 갑니다.");
				Sleep(2000);
			}
			else if (input == 4)
			{
				system("cls");
				printf("감자에 농약을 주는중...");
				jcount++;
				Sleep(1000);
				system("cls");
			}
			else if (input == 5) //힌트 확인하는 곳
			{
				system("cls");
				gotoxy(55, 3);
				printf("아무 숫자나 눌러 뒤로 가기");

				if (ending[0] == 0 && ending[1] == 0 && ending[2] == 0 && ending[3] == 0 && ending[4] == 0 && ending[5] == 0)
				{
					system("cls");
					printf("좀 더 게임을 해보자...\n");
					Sleep(2000);
					system("cls");

					continue;
				}
				hint();

				scanf("%d", &input);

				if (input == 0)
				{
					system("cls");
					break;
				}

			}
			else if (input != 0)
			{
				system("cls");
				printf("잘못된 입력입니다. 다시 입력해주세요.");
				Sleep(1000);
				continue;
			}
		}
	}
}

void p_print()//감자 심은것 출력
{

	if (pcount == 1)
	{
		gotoxy(15, 14);
		printf("♣");
	}
	else if (pcount == 2)
	{
		gotoxy(15, 14);
		printf("♣");
		gotoxy(30, 14);
		printf("♣");

	}
	else if (pcount == 3)
	{
		gotoxy(15, 14);
		printf("♣");
		gotoxy(30, 14);
		printf("♣");
		gotoxy(45, 14);
		printf("♣");
	}
}

void hint()
{
	if (ending[0] == 1)
	{
		gotoxy(10, 3);
		printf("1.감자는 3개 까지만 심을 수 있습니다.\n");
	}
	if (ending[1] == 1)
	{
		gotoxy(10, 5);
		printf("2.물은 일주일에 한번만 주어야 합니다.");
	}
	if (ending[2] == 1)
	{
		gotoxy(10, 7);
		printf("3.물을 주고 8일이 넘어가면 감자가 말라죽습니다.");
	}
	if (ending[3] == 1)
	{
		gotoxy(10, 9);
		printf("4.농약은 한달에 한번만 주어야 합니다.");
	}
	if (ending[4] == 1)
	{
		gotoxy(10, 11);
		printf("5.농약을 주고 31일이 넘어가면 벌레가 다 먹어버립니다.");
	}
	if (ending[5] == 1)
	{
		gotoxy(10, 13);
		printf("6.괴생물체를 막을 방법은 없습니다.");
	}
	if (ending[6] == 1)
	{
		gotoxy(10, 15);
		printf("7.게임 종료를 하기 위해서는 모든 힌트를 얻고 감자에 농약과 물을 잘 준뒤 10초후 종료 됩니다.");
	}
}


void gotoxy(int x, int y)
{
	COORD Pos = { x - 1 , y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
