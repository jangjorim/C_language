#include "potato.h"

int login()
{
	int n, num, mode;
	int password = 15926;
	int cnt = 3;
	int input = 5;

	while (1) {


		printf("������ �����Ͻ÷��� 0�� �Է��� �ּ���");			// ������ ���۽� �̸� ��Ʈ�� �� �� �ִ� �ٸ� ��Ʈ�� ����� ���Ҵ�.
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

		if (num == 52)			// ���� 0�� �ƴ� 52�� �Է��ϰ� �Ǹ� ��й�ȣ�� �Է��϶�� ȭ���� ����ϰ� �ȴ�.
		{
			printf("�α��� ��й�ȣ �Է�");
			scanf("%d", &n);
			if (n == password)
			{
				mode = 1;
				system("cls");
				printf("��Ʈ����");
				Sleep(1000);
				system("cls");

				gotoxy(10, 3);
				printf("�ذ��ڴ� 3�� ������ ���� �� �ֽ��ϴ�.\n");
				gotoxy(10, 5);
				printf("�ع��� �����Ͽ� �ѹ��� �־�� �մϴ�.");
				gotoxy(10, 7);
				printf("�ع��� �ְ� 8���� �Ѿ�� ���ڰ� �����׽��ϴ�.");
				gotoxy(10, 9);
				printf("�س���� �Ѵ޿� �ѹ��� �־�� �մϴ�.");
				gotoxy(10, 11);
				printf("�س���� �ְ� 31���� �Ѿ�� ������ �� �Ծ�����ϴ�.");
				gotoxy(10, 13);
				printf("�ر�����ü�� ���� ����� �����ϴ�.");
				gotoxy(10, 15);
				printf("�ذ��� ���Ḧ �ϱ� ���ؼ��� ��� ��Ʈ�� ��� ���ڿ� ���� ���� �� �ص� 10���� ���� �˴ϴ�.");
				gotoxy(60, 3);
				printf("0.���ӽ����ϱ�");

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
					printf("��й�ȣ�� �����̻� Ʋ�Ƚ��ϴ�\n���α׷��� �����մϴ�.");			// ��й�ȣ�� ���������� Ʋ������ �۵��ȴ�.
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
		else			// 0, 52 �̿ܿ� �ٸ� ���ڸ� �Է��ϰ� �Ǹ� �ٽ� �Է��ϰ� �Ͽ���.
		{
			system("cls");
			printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���.");
			Sleep(1000);
			system("cls");
			continue;
		}
	}
}