#include "potato.h"

void game_start()
{
	int n = 0;

	while (1) { // ó�� ������ ���� �ݺ���
		gotoxy(26, 3);
		printf("���� Ű��� ���� ����!!!!!\n");
		gotoxy(25, 5);
		printf("%20s\n", "1.���� ����\n");
		gotoxy(25, 7);
		printf("%21s\n", "2.���� ������\n");
		gotoxy(32, 11);
		printf("�� ���ǻ��ס�");
		gotoxy(2, 13);
		printf("�ذ����� �� �� ���� b �� ������ � ���ڵ� �Է����� ���ʽÿ�.��");
		gotoxy(2, 15);
		printf("�ذ��ڸ� �ɰ� ���� ���̶� ����� ���൵ �������ϴ�!! ������ ���ӿ����� ������� �������");

		scanf("%d", &n);
		system("cls");

		if (n == 1) // ������ ���� 1 �Է½�
		{
			printf("�����մϴ�...");
			Sleep(1000);
			system("cls");
			break;
		}
		else if (n == 2) // ���Ḧ ���� 2 �Է½�
		{
			printf("�����մϴ�...");
			Sleep(1000);
			exit(-1);
		}
		else // 1�� 2 �̿ܿ� �ٸ� ���ڸ� �Է��� ��
		{
			system("cls");
			printf("�߸��� �Է��Դϴ�. �ٽ��Է����ּ���\n");
			Sleep(1500);
			system("cls");
			continue;
		}
	}
}