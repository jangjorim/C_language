#include "potato.h"

void game_start()
{
	int n = 0;

	while (1) { // 처음 시작을 위한 반복문
		gotoxy(26, 3);
		printf("감자 키우기 게임 시작!!!!!\n");
		gotoxy(25, 5);
		printf("%20s\n", "1.게임 시작\n");
		gotoxy(25, 7);
		printf("%21s\n", "2.게임 나가기\n");
		gotoxy(32, 11);
		printf("※ 주의사항※");
		gotoxy(2, 13);
		printf("※게임을 할 때 영어 b 를 제외한 어떤 문자도 입력하지 마십시오.※");
		gotoxy(2, 15);
		printf("※감자를 심고 물을 물이랑 농약을 안줘도 괜찮습니다!! 하지만 게임엔딩은 기대하지 마세요※");

		scanf("%d", &n);
		system("cls");

		if (n == 1) // 시작을 위해 1 입력시
		{
			printf("시작합니다...");
			Sleep(1000);
			system("cls");
			break;
		}
		else if (n == 2) // 종료를 위해 2 입력시
		{
			printf("종료합니다...");
			Sleep(1000);
			exit(-1);
		}
		else // 1과 2 이외에 다른 숫자를 입력할 시
		{
			system("cls");
			printf("잘못된 입력입니다. 다시입력해주세요\n");
			Sleep(1500);
			system("cls");
			continue;
		}
	}
}