#include <stdio.h>
#include<windows.h>
//#include <stdlib.h>

/*int time();
int i = 0; // ��������

int main()
{
	int n = 0;
	while (1) { // ó�� ������ ���� �ݺ���
		printf("%20s\n", "���� Ű��� ���� ����!!!!!\n");
		printf("%20s\n", "���� ���� .1\n");
		printf("%20s\n", "���� ������ .2\n");
		
		scanf("%d", &n);
		system("cls");

		if (n == 1) // ������ ���� 1 �Է½�
		{
			printf("�����մϴ�...");
			Sleep(1000);
			system("cls");
			break;
		}
		else if (n == 0) // ���Ḧ ���� 0 �Է½�
		{
			printf("�����մϴ�...");
			Sleep(2000);
			return 0;
		}
		else // 1�� 0 �̿ܿ� �ٸ� ���ڸ� �Է��� ��
		{
			system("cls");
			printf("�߸��� �Է��Դϴ�. �ٽ��Է����ּ���\n");
			continue;
		}
	}
	while (1)
	{
		printf("�âââââââââââââââââââââââââââââââââââââââ�\n");
		printf("��\n"); 
		printf("��                                                                            ��\n");
		printf("��                                                                            ��\n");
		printf("��                                                                            ��\n");
		printf("��                                                                            ��\n");
		printf("��                                                                            ��\n");
		printf("��                                                                            ��\n");
		printf("��                                                                            ��\n");
		printf("��                                                                            ��\n");
		printf("��                                                                            ��\n");
		printf("��                                                                            ��\n");
		printf("��                                                                            ��\n");
		printf("��                                                                            ��\n");
		printf("��                                                                            ��\n");
		printf("��                                                                            ��\n");
		printf("��                                                                            ��\n");
		printf("��                                                                            ��\n");
		printf("��                                                                            ��\n");
		printf("�âââââââââââââââââââââââââââââââââââââââ�\n");
		Sleep(1000);
		system("cls");

		if (time() == 25)
		{
			day++;
		}
		if (day == 30)
		{
			month++;
		}

	}
}


int time()
{
	i = i + 1;
	if (i == 25)
		i = 1;
	return printf("%d", i);
}*/



/*int main()
{
	int n, num, mode;
	int password = 15926;
	int cnt = 3;

	while (1) {


		printf("������ �����Ͻ÷��� 0�� �Է��� �ּ���");
		//getchar();
		scanf("%d", &num);

		if (num == 0)
		{
			mode = 0;

			system("cls");
			printf("player�� �����մϴ�...");
			Sleep(1000);
			system("cls");
			break;
		}

		if (num == 52)
		{
			printf("�α��� ��й�ȣ �Է�");
			scanf("%d", &n);
			if (n == password)
			{
				mode = 1;
				system("cls");
				printf("�����ڷ� �����մϴ�...");
				Sleep(1000);
				system("cls");
				break;
			}
			else
			{
				cnt--;
				if (cnt == 0)
				{
					system("cls");
					printf("��й�ȣ�� �����̻� Ʋ�Ƚ��ϴ�\n���α׷��� �����մϴ�.");
					exit(-1); //���� �Լ�
				}
				system("cls");
				printf("�̷� �����ڰ� �ƴϽŰ���?\n");
				printf("���� �õ�Ƚ��>>%d", cnt);
				Sleep(2000);
				system("cls");

				continue;
			}
		}
		else
		{
			printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���.");
			Sleep(1000);
			system("cls");
			continue;
		}


	}
}*/



/*INPUT_RECORD rec;
DWORD        dwNOER;

void CheckMouse()
{
	while (1)
	{
		ReadConsoleInput(GetStdHandle(STD_INPUT_HANDLE), &rec, 1, &dwNOER); // �ܼ�â �Է��� �޾Ƶ���.
		if (rec.EventType == MOUSE_EVENT) // ���콺 �̺�Ʈ�� ���
		{
			if (rec.Event.MouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED) // ���� ��ư�� Ŭ���Ǿ��� ���
			{
				int mouse_x = rec.Event.MouseEvent.dwMousePosition.X; // X�� �޾ƿ�
				int mouse_y = rec.Event.MouseEvent.dwMousePosition.Y; // Y�� �޾ƿ�
				COORD Coor = { 0, 0 };
				DWORD dw;
				FillConsoleOutputCharacter(GetStdHandle(STD_OUTPUT_HANDLE), ' ', 80 * 25, Coor, &dw); // �ܼ�â ȭ���� �����.
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coor); // Ŀ���� 0, 0���� �̵���Ų��.
				printf("%d, %d", mouse_x, mouse_y); // ��ǥ�� ����Ѵ�.
				return;
			}
		}
	}
}

void main()
{
	SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), ENABLE_PROCESSED_INPUT | ENABLE_MOUSE_INPUT);
	while (true)
	{
		CheckMouse();
	}
}*/


/*#include <stdio.h> 
#include <Windows.h>


HANDLE COUT = 0;    // �ܼ� ��� ��ġ
HANDLE CIN = 0;        // �ܼ� �Է� ��ġ

int be_input()
{
	INPUT_RECORD input_record;
	DWORD input_count;

	PeekConsoleInput(CIN, &input_record, 1, &input_count);
	return input_count;
}

int get_input(WORD *vkey, COORD *pos)
{
	INPUT_RECORD input_record;
	DWORD input_count;

	ReadConsoleInput(CIN, &input_record, 1, &input_count);
	switch (input_record.EventType) {
	case MOUSE_EVENT:
		if (pos && (input_record.Event.MouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED)) {
			CONSOLE_SCREEN_BUFFER_INFO csbi;

			GetConsoleScreenBufferInfo(COUT, &csbi);

			*pos = input_record.Event.MouseEvent.dwMousePosition;
			pos->X -= csbi.srWindow.Left;
			pos->Y -= csbi.srWindow.Top;

			return MOUSE_EVENT;
		}
		break;

	}

	//    FlushConsoleInputBuffer(CIN);
	return 0;
}

void gotoxy(int x, int y)      // ��ǥ ������ gotoxy
{
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

void main()
{
	DWORD mode;
	WORD key;
	COORD pos;

	int event;        // ���콺 �̺�Ʈ�� �̿�
	int x;            // ���콺�� x��ǥ �����
	int y;            // ���콺�� y��ǥ �����

	CIN = GetStdHandle(STD_INPUT_HANDLE);
	COUT = GetStdHandle(STD_OUTPUT_HANDLE);

	// ���콺 Ȱ��ȭ
	GetConsoleMode(CIN, &mode);
	SetConsoleMode(CIN, mode | ENABLE_MOUSE_INPUT);

	while (1)
	{
		if (be_input())
		{
			if (get_input(&key, &pos) != 0)
			{
				MOUSE_EVENT;
				x = pos.X;    // ���콺Ŭ������ x,y������ ����ǵ�����
				y = pos.Y;
				gotoxy(x, y);
				printf("*");
			}
		}
	}
}*/

#include <conio.h>

/*#define ENTER 13

int main(int argc, char *argv[]) {
	int key, left = 0;

	hamster_create();

	while (1) {
		key = _getch(); // Ű���� �Է��� ��´�.
		if (key == ENTER) { // ���� Ű�� ��������
			break; // �����Ѵ�.
		}
		else if (key == ' ') { // �����̽� Ű�� ��������
			left = 1 - left; // ������ �ݴ�� �Ѵ�.

			if (left) { // ���� �����̸�
				hamster_wheels(0, 50);
			}
			else { // ������ �����̸�
				hamster_wheels(50, 0);
			}
		}

		wait(20); // �ʹ� ���� �ݺ����� �ʵ��� �Ѵ�.
	}

	dispose_all(); // ��� ������ �����ϰ� �޸𸮸� �����Ѵ�.

	return 0;
}*/


/*int main()
{

	while (1)
	{
		if (_kbhit())
		{

			if (_kbhit() == 1)
			{
				break;
			}
		}
		
		printf("win");
		Sleep(500);
		system("cls");
	}
	printf("stop");
}*/


#include <stdio.h> 
#include <conio.h> 
void main()
{
	while (1)
	{
		if (_kbhit()) // Ư��Ű�� ������... 
		{
			if (getch() == 'z')  // ����Ű�� z �̸� ��ž. 
				break;
		}
		printf("ddd");
		Sleep(500);
		system("cls");
	}
	printf("stop...\n");
}
