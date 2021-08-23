#include "potato.h"

int login()
{
	int n, num, mode;
	int password = 15926;
	int cnt = 3;
	int input = 5;

	while (1) {


		printf("게임을 시작하시려면 0을 입력해 주세요");			// 게임을 시작시 미리 힌트를 볼 수 있는 다른 루트를 만들어 놓았다.
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

		if (num == 52)			// 만약 0이 아닌 52를 입력하게 되면 비밀번호를 입력하라는 화면이 출력하게 된다.
		{
			printf("로그인 비밀번호 입력");
			scanf("%d", &n);
			if (n == password)
			{
				mode = 1;
				system("cls");
				printf("힌트보기");
				Sleep(1000);
				system("cls");

				gotoxy(10, 3);
				printf("※감자는 3개 까지만 심을 수 있습니다.\n");
				gotoxy(10, 5);
				printf("※물은 일주일에 한번만 주어야 합니다.");
				gotoxy(10, 7);
				printf("※물을 주고 8일이 넘어가면 감자가 말라죽습니다.");
				gotoxy(10, 9);
				printf("※농약은 한달에 한번만 주어야 합니다.");
				gotoxy(10, 11);
				printf("※농약을 주고 31일이 넘어가면 벌레가 다 먹어버립니다.");
				gotoxy(10, 13);
				printf("※괴생물체를 막을 방법은 없습니다.");
				gotoxy(10, 15);
				printf("※게임 종료를 하기 위해서는 모든 힌트를 얻고 감자에 농약과 물을 잘 준뒤 10초후 종료 됩니다.");
				gotoxy(60, 3);
				printf("0.게임시작하기");

				scanf("%d", &input);
				if (input == 0)
				{
					system("cls");
					break;
				}
			}
			else
			{
				cnt--;
				if (cnt == 0)
				{
					system("cls");
					printf("비밀번호를 세번이상 틀렸습니다\n프로그램을 종료합니다.");			// 비밀번호를 지속적으로 틀렸을시 작동된다.
					exit(-1); //종료 함수
				}
				system("cls");
				printf("이런 관계자가 아니신가요?\n");
				printf("남은 시도횟수>>%d", cnt);
				Sleep(2000);
				system("cls");

				continue;
			}
		}
		else			// 0, 52 이외에 다른 숫자를 입력하게 되면 다시 입력하게 하였다.
		{
			system("cls");
			printf("잘못된 입력입니다. 다시 입력해주세요.");
			Sleep(1000);
			system("cls");
			continue;
		}
	}
}