/*#include     <windows.h>
#include <stdlib.h>

struct admin
{
	char admin[20];
};

int equal(struct admin s1, struct admin s2);

int main() {
	int n;
	while (1) { // ó�� ������ ���� �ݺ���
		printf("���� Ű��� ����!!!!!!!!!!\n(����:1)\n(����:0)\n");
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
			Sleep(1000);
			return 0;
		}
		else // 1�� 0 �̿ܿ� �ٸ� ���ڸ� �Է��� ��
		{
			system("cls");
			printf("�߸��� �Է��Դϴ�. �ٽ��Է����ּ���\n");
			continue;
		}
	}

	while (1) // ���� ����
	{
		printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�\n");
		printf("         ���� Ű��� ���� ����\n");
		printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�\n");

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
		puts("�ð�");
		printf("%d �� \n", clock() / 1000);
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

		printf("�����ڶ�� Password�� �Է����ֽʽÿ�.\n�׳� ������ �����Ϸ��� 0�� �Է����ּ���.\n");
		getchar();
		scanf("%d", &num);

		if (num == password)
		{
			mode = 1;
			system("cls");
			printf("�����ڷ� �����մϴ�...");
			Sleep(1000);
			system("cls");
			break;
		}

		else if (num != password && num != 0)
		{
			cnt++;

			system("cls");
			printf("�߸��� �н������Դϴ�. �ٽ� �Է����ֽʽÿ�.\n");
			printf("�õ�Ƚ��>>%d", cnt);
			Sleep(1000);
			system("cls");

			if (cnt > 2)
			{
				printf("��й�ȣ�� �����̻� Ʋ�Ƚ��ϴ�\n���α׷��� �����մϴ�.");
				return 0;
			}

			continue;
		}

		else if (num == 0)
		{
			mode = 0;

			system("cls");
			printf("player�� �����մϴ�...");
			Sleep(1000);
			system("cls");
			break;
		}

		else
		{
			printf("�߸��� �Է��Դϴ�. �ٽõ��ư��ϴ�.");
			Sleep(1000);
			system("cls");
			continue;
		}
	}

	if (mode == 1)
		while (1) // ���� ����
		{
			printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�\n");
			printf("		 ���� Ű��� ���� ����(Admin)\n");
			printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�\n");

			break;
		}

	if (mode == 0)
		while (1) // ���� ����
		{
			int num, n;

			printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�\n");
			printf("		 ���� Ű��� ���� ����(Player)\n");
			printf("�ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�\n");

			printf("1. ���� �� �Ѹ���\n2.���� �� �ֱ�\n3.���� ���� Ȯ��\n4.��Ʈ ���\n");
			scanf("%d", &num);

			if (num == 1)
			{
				system("cls");
				printf("�翡 ���� �Ѹ��� ���Դϴ�...");
				Sleep(1000);
				system("cls");

				potato[0][cnt] = 1;
				cnt++;

				if (potato[0][3] == 1)
				{
					printf("���� (����:���� ������ �Ǿ����ϴ�.)\n��Ʈ�� �߰��� �� ����.(���ư���:0)\n");
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