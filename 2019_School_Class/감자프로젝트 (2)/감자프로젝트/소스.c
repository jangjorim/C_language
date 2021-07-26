#include <stdio.h>
#include<windows.h>
//#include <stdlib.h>

/*int time();
int i = 0; // 전역변수

int main()
{
	int n = 0;
	while (1) { // 처음 시작을 위한 반복문
		printf("%20s\n", "감자 키우기 게임 시작!!!!!\n");
		printf("%20s\n", "게임 시작 .1\n");
		printf("%20s\n", "게임 나가기 .2\n");
		
		scanf("%d", &n);
		system("cls");

		if (n == 1) // 시작을 위해 1 입력시
		{
			printf("시작합니다...");
			Sleep(1000);
			system("cls");
			break;
		}
		else if (n == 0) // 종료를 위해 0 입력시
		{
			printf("종료합니다...");
			Sleep(2000);
			return 0;
		}
		else // 1과 0 이외에 다른 숫자를 입력할 시
		{
			system("cls");
			printf("잘못된 입력입니다. 다시입력해주세요\n");
			continue;
		}
	}
	while (1)
	{
		printf("▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
		printf("▣\n"); 
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
		printf("▣                                                                            ▣\n");
		printf("▣                                                                            ▣\n");
		printf("▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
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


		printf("게임을 시작하시려면 0을 입력해 주세요");
		//getchar();
		scanf("%d", &num);

		if (num == 0)
		{
			mode = 0;

			system("cls");
			printf("player로 접속합니다...");
			Sleep(1000);
			system("cls");
			break;
		}

		if (num == 52)
		{
			printf("로그인 비밀번호 입력");
			scanf("%d", &n);
			if (n == password)
			{
				mode = 1;
				system("cls");
				printf("관리자로 접속합니다...");
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
					printf("비밀번호를 세번이상 틀렸습니다\n프로그램을 종료합니다.");
					exit(-1); //종료 함수
				}
				system("cls");
				printf("이런 관리자가 아니신가요?\n");
				printf("남은 시도횟수>>%d", cnt);
				Sleep(2000);
				system("cls");

				continue;
			}
		}
		else
		{
			printf("잘못된 입력입니다. 다시 입력해주세요.");
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
		ReadConsoleInput(GetStdHandle(STD_INPUT_HANDLE), &rec, 1, &dwNOER); // 콘솔창 입력을 받아들임.
		if (rec.EventType == MOUSE_EVENT) // 마우스 이벤트일 경우
		{
			if (rec.Event.MouseEvent.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED) // 좌측 버튼이 클릭되었을 경우
			{
				int mouse_x = rec.Event.MouseEvent.dwMousePosition.X; // X값 받아옴
				int mouse_y = rec.Event.MouseEvent.dwMousePosition.Y; // Y값 받아옴
				COORD Coor = { 0, 0 };
				DWORD dw;
				FillConsoleOutputCharacter(GetStdHandle(STD_OUTPUT_HANDLE), ' ', 80 * 25, Coor, &dw); // 콘솔창 화면을 지운다.
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coor); // 커서를 0, 0으로 이동시킨다.
				printf("%d, %d", mouse_x, mouse_y); // 좌표를 출력한다.
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


HANDLE COUT = 0;    // 콘솔 출력 장치
HANDLE CIN = 0;        // 콘솔 입력 장치

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

void gotoxy(int x, int y)      // 좌표 보내기 gotoxy
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

	int event;        // 마우스 이벤트에 이용
	int x;            // 마우스의 x좌표 저장소
	int y;            // 마우스의 y좌표 저장소

	CIN = GetStdHandle(STD_INPUT_HANDLE);
	COUT = GetStdHandle(STD_OUTPUT_HANDLE);

	// 마우스 활성화
	GetConsoleMode(CIN, &mode);
	SetConsoleMode(CIN, mode | ENABLE_MOUSE_INPUT);

	while (1)
	{
		if (be_input())
		{
			if (get_input(&key, &pos) != 0)
			{
				MOUSE_EVENT;
				x = pos.X;    // 마우스클릭값이 x,y변수에 저장되도록함
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
		key = _getch(); // 키보드 입력을 얻는다.
		if (key == ENTER) { // 엔터 키를 눌렀으면
			break; // 종료한다.
		}
		else if (key == ' ') { // 스페이스 키를 눌렀으면
			left = 1 - left; // 방향을 반대로 한다.

			if (left) { // 왼쪽 방향이면
				hamster_wheels(0, 50);
			}
			else { // 오른쪽 방향이면
				hamster_wheels(50, 0);
			}
		}

		wait(20); // 너무 빨리 반복하지 않도록 한다.
	}

	dispose_all(); // 통신 연결을 종료하고 메모리를 해제한다.

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
		if (_kbhit()) // 특정키가 눌리면... 
		{
			if (getch() == 'z')  // 눌린키가 z 이면 스탑. 
				break;
		}
		printf("ddd");
		Sleep(500);
		system("cls");
	}
	printf("stop...\n");
}
