#include "potato.h"

//time
int day = 1;
int month = 3;
int i = 0;
int w = 0;  // �� ��Ÿ�� ī��Ʈ
int j = 0; // ��� ��Ÿ�� ī��Ʈ
int stopcount = 0; // ���� ���� ī��Ʈ


//list
int input = 10;
int ending[7] = { 0, };
int pcount = 0; //���� �ɴ� Ƚ�� ī��Ʈ
int wcount = 0; //���ִ� ī��Ʈ
int jcount = 0; // ��� ī��Ʈ


int box()
{
	for (double i = 0; i < 30; i++)
	{
		printf("��");
	}
	for (double i = 1; i < 20; i++)
	{
		gotoxy(59.5, i);
		printf("��");
	}
	for (int i = 1; i < 20; i++)
	{
		gotoxy(1, i);
		printf("��");

		if (i == 3)
		{
			gotoxy(5, i);
			time();
			gotoxy(50, i);
			printf("b.�޴�");
			p_print();

			gotoxy(50, 5);
			printf("��:%d", w);
			gotoxy(50, 7);
			printf("���:%d", j);
			gotoxy(50, 9);

		}
	}
	for (int i = 1; i < 30; i++)
	{
		printf("��");
	}
	if (wcount == 1)
	{
		w++;

		if (w > 192) // 192
		{
			system("cls");
			printf("3.ending: ���� ���� ����(����:���ڿ��� ���� �����ð����� �� �־���.)\n\n");
			printf("GAME OVER\n");
			Sleep(3000);
			printf("��Ʈ�� �߰� �Ǿ���.");
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
			printf("5.ending: ������ ���� ����� ����(����:������)\n\n");
			printf("GAME OVER\n");
			Sleep(3000);
			printf("��Ʈ�� �߰� �Ǿ���.");
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
		if (_kbhit()) // Ư��Ű�� ������... 
		{
			if (getch() == 'b')  // ����Ű�� b �̸� ��ž. 
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
			printf("8 �� 1 �� 1��\n");
			Sleep(3000);
			printf("���ڸ� ��Ȯ�ϱ⿡�� �ʹ� �ʾ����ϴ�.\n");
			Sleep(4000);
			printf("�η��� ������ ������Ʈ�� �����մϴ�.\n\n");
			exit(-1); //���� �Լ�
		}

		//system("cls");
		return printf("%d �� %d �� %d ��", month, day, i);
	}
}



void list()
{
	system("cls");

	while (1)
	{
		system("cls");
		gotoxy(65, 3);
		printf("0.������");
		gotoxy(10, 3);
		printf("1.������ �ɱ�\n");

		if (pcount >= 1)
		{
			gotoxy(10, 5);
			printf("2.���� ���ֱ�");
			gotoxy(10, 7);
			printf("3.���� ���� Ȯ���ϱ�");
			gotoxy(10, 9);
			printf("4.���� ����ֱ�");
			gotoxy(10, 11);
			printf("5.��Ʈ ����\n\n");
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
				printf("2.ending: �Ѹ��� ���� ����(����:���� �ʹ� ���� �־���.)\n\n");
				printf("GAME OVER\n");
				Sleep(3000);
				printf("��Ʈ�� �߰� �Ǿ���.");
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
				printf("4.ending: �������� ����(����:��� ���� ���)\n\n");
				printf("GAME OVER\n");
				Sleep(3000);
				printf("��Ʈ�� �߰� �Ǿ���.");
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
						printf("���������� ���ڸ� ��� �ϼ̽��ϴ�.");
						Sleep(2000);
						gotoxy(20, 5);
						printf("�ż��� ����� ���ڸ� �����迡 �����Ͽ� �ֽʽÿ�.");
						Sleep(2000);
						printf("�η��� ������ ������Ʈ�� �����մϴ�.");
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
			printf("�����ڸ� �ɴ���...");
			pcount++;
			Sleep(2000);
			if (pcount == 4)
			{
				system("cls");
				printf("1. ending: ������ü ����(����:���� ������ �Ǿ����ϴ�.)\n\n");
				printf("GAME OVER\n");
				Sleep(3000);
				printf("��Ʈ�� �߰� �Ǿ���.");
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
				printf("���ڿ� ���� �Ѹ��� ���Դϴ�...");
				wcount++;

				Sleep(1000);
				system("cls");
			}
			else if (input == 3)
			{
				system("cls");
				printf("������ ���¸� Ȯ���մϴ�.");
				Sleep(1000);
				system("cls");
				printf("���� Ȯ�� �Ұ�%uAC00%uB2A5....%uC774%uC2A4%uD130%20%uC560%uADF8...\n\n");
				Sleep(1500);
				printf("....");
				Sleep(1000);
				printf("�ý��� ������ �ǵ��� ���ϴ�.");
				Sleep(2000);
			}
			else if (input == 4)
			{
				system("cls");
				printf("���ڿ� ����� �ִ���...");
				jcount++;
				Sleep(1000);
				system("cls");
			}
			else if (input == 5) //��Ʈ Ȯ���ϴ� ��
			{
				system("cls");
				gotoxy(55, 3);
				printf("�ƹ� ���ڳ� ���� �ڷ� ����");

				if (ending[0] == 0 && ending[1] == 0 && ending[2] == 0 && ending[3] == 0 && ending[4] == 0 && ending[5] == 0)
				{
					system("cls");
					printf("�� �� ������ �غ���...\n");
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
				printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���.");
				Sleep(1000);
				continue;
			}
		}
	}
}

void p_print()//���� ������ ���
{

	if (pcount == 1)
	{
		gotoxy(15, 14);
		printf("��");
	}
	else if (pcount == 2)
	{
		gotoxy(15, 14);
		printf("��");
		gotoxy(30, 14);
		printf("��");

	}
	else if (pcount == 3)
	{
		gotoxy(15, 14);
		printf("��");
		gotoxy(30, 14);
		printf("��");
		gotoxy(45, 14);
		printf("��");
	}
}

void hint()
{
	if (ending[0] == 1)
	{
		gotoxy(10, 3);
		printf("1.���ڴ� 3�� ������ ���� �� �ֽ��ϴ�.\n");
	}
	if (ending[1] == 1)
	{
		gotoxy(10, 5);
		printf("2.���� �����Ͽ� �ѹ��� �־�� �մϴ�.");
	}
	if (ending[2] == 1)
	{
		gotoxy(10, 7);
		printf("3.���� �ְ� 8���� �Ѿ�� ���ڰ� �����׽��ϴ�.");
	}
	if (ending[3] == 1)
	{
		gotoxy(10, 9);
		printf("4.����� �Ѵ޿� �ѹ��� �־�� �մϴ�.");
	}
	if (ending[4] == 1)
	{
		gotoxy(10, 11);
		printf("5.����� �ְ� 31���� �Ѿ�� ������ �� �Ծ�����ϴ�.");
	}
	if (ending[5] == 1)
	{
		gotoxy(10, 13);
		printf("6.������ü�� ���� ����� �����ϴ�.");
	}
	if (ending[6] == 1)
	{
		gotoxy(10, 15);
		printf("7.���� ���Ḧ �ϱ� ���ؼ��� ��� ��Ʈ�� ��� ���ڿ� ���� ���� �� �ص� 10���� ���� �˴ϴ�.");
	}
}


void gotoxy(int x, int y)
{
	COORD Pos = { x - 1 , y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
