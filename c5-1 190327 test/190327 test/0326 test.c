#include <stdio.h>
/*int main()
{
	int i = 13, j = 5, temp;
	printf("%d %d\n", i == 13 && j == 5, i == 13 && j == 4);
	printf("%d %d\n", i == 13 || j == 4, i == 12 || j == 4);
	temp = i; printf("%d", !temp); // %d�ڿ� ��� ���⸦ ���� ������ 01�� ���� �ٿ��� ���´�
	temp = 0; printf(" %d", !temp); // ���⿡ �ִ� %d �տ� ���⸦ �ص� 0 1�� ���´�
	return 0;
}*/

/*int main()
{
	int i = 13;
	int j = 5;
	printf("%d %d %d %d", i&j, i | j, i^j, ~i); // ~i �����ؼ� ����
	return 0;
}*/

/*int main()
{
	int number;
	printf("���ڸ� �Է��ϼ���");
	scanf("%d", &number);
	if (number > 0)
	{
		printf("����Դϴ�.");
	}
	else
	{
		printf("����� �ƴմϴ�.");
	}
}*/

/*int main()
{
	int number;
	printf("������ �Է��� �ּ���");
	scanf("%d", &number);

	if (number % 2 == 0)
	{
		printf("¦�� �Դϴ�.");
	}
	else
	{
		printf("Ȧ�� �Դϴ�.");
	}
	return 0;
}*/
int main()
{
	int num;
	printf("���ڸ� �Է��ϼ���");
	scanf("%d", &num);
	num % 2 == 0 ? printf("¦�� �Դϴ�.") : printf("Ȧ�� �Դϴ�.");
}

