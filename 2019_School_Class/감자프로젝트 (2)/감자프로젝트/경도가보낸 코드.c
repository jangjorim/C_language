/*#include     <windows.h>
#include <stdlib.h>

struct admin
{
	char admin[20];
};

int equal(struct admin s1, struct admin s2);

int main() {
	int n;
	while (1) { // 처음 시작을 위한 반복문
		printf("감자 키우기 게임!!!!!!!!!!\n(시작:1)\n(안해:0)\n");
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
			Sleep(1000);
			return 0;
		}
		else // 1과 0 이외에 다른 숫자를 입력할 시
		{
			system("cls");
			printf("잘못된 입력입니다. 다시입력해주세요\n");
			continue;
		}
	}

	while (1) // 게임 시작
	{
		printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★\n");
		printf("         감자 키우기 게임 시작\n");
		printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★\n");

		printf("");

		break;
	}
}
int equal(struct admin s1, struct admin s2) 
{
	if (strcmp(s1.admin, s2.admin) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}



#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>


int main() {


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
		puts("시간");
		printf("%d 초 \n", clock() / 1000);
		Sleep(1000);
		system("cls");

		if (clock() / 1000 == 11)
			break;
	}
}*/


#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int potato[3][4] = { 0 };
int cnt = 0;
int result[3][1] = { 0 };

int main() {
	int n, num, mode;
	int password = 15926;
	int cnt = 0;

	while (1) {

		printf("관리자라면 Password를 입력해주십시오.\n그냥 게임을 진행하려면 0을 입력해주세요.\n");
		getchar();
		scanf("%d", &num);

		if (num == password)
		{
			mode = 1;
			system("cls");
			printf("관리자로 접속합니다...");
			Sleep(1000);
			system("cls");
			break;
		}

		else if (num != password && num != 0)
		{
			cnt++;

			system("cls");
			printf("잘못된 패스워드입니다. 다시 입력해주십시오.\n");
			printf("시도횟수>>%d", cnt);
			Sleep(1000);
			system("cls");

			if (cnt > 2)
			{
				printf("비밀번호를 세번이상 틀렸습니다\n프로그램을 종료합니다.");
				return 0;
			}

			continue;
		}

		else if (num == 0)
		{
			mode = 0;

			system("cls");
			printf("player로 접속합니다...");
			Sleep(1000);
			system("cls");
			break;
		}

		else
		{
			printf("잘못된 입력입니다. 다시돌아갑니다.");
			Sleep(1000);
			system("cls");
			continue;
		}
	}

	if (mode == 1)
		while (1) // 게임 시작
		{
			printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★\n");
			printf("		 감자 키우기 게임 시작(Admin)\n");
			printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★\n");

			break;
		}

	if (mode == 0)
		while (1) // 게임 시작
		{
			int num, n;

			printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★\n");
			printf("		 감자 키우기 게임 시작(Player)\n");
			printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★\n");

			printf("1. 감자 씨 뿌리기\n2.감자 물 주기\n3.감자 상태 확인\n4.힌트 목록\n");
			scanf("%d", &num);

			if (num == 1)
			{
				system("cls");
				printf("밭에 씨를 뿌리는 중입니다...");
				Sleep(1000);
				system("cls");

				potato[0][cnt] = 1;
				cnt++;

				if (potato[0][3] == 1)
				{
					printf("실패 (사유:밭이 엉망이 되었습니다.)\n힌트가 추가된 것 같다.(돌아가자:0)\n");
					scanf("%d", &n);
					result[0][0] == 1;

					if (n == 0)
					{
						continue;
					}

				}
			}
		}


}