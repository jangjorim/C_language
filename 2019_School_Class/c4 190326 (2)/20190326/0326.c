#include <stdio.h>
/*int main()
{
	int i = 13, j = 5, temp;
	printf("%d %d\n", i == 13 && j == 5, i == 13 && j == 4); //&& �ΰ� ��� ���̿��� ��
	printf("%d %d\n", i == 13 || j == 4, i == 12 || j == 4); //|| ���� �ϳ��� ���̸� �� �Ѵ� ���Ƶ� ��
	temp = i; 
	printf("%d", !temp); // %d�ڿ� ��� ���⸦ ���� ������ 01�� ���� �ٿ��� ���´� // ! ���̸� ���� �����̸� ��
	temp = 0; 
	printf(" %d", !temp); //���⿡ �ִ� %d �տ� ���⸦ �ص� 0 1�� ���´�       // !!
	return 0;
}*/


/*int main()
{
	int i = 13;
	int j = 5;
	printf("%d %d %d %d", i&j, i | j, i^j, ~i);
	return 0;
}*/

/*int main() //����Ʈ ������
{
	int i = 13;
	int j = 5;
	printf("%d %d %d %d", i << 2, i >> 2, j << 3, j >> 3);
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
	int num;
	printf("���ڸ� �Է��ϼ���");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("¦�� �Դϴ�.");
	}

	else
	{
		printf("Ȧ�� �Դϴ�.");
	}
}*/

/*int main()

{
	int num;
	printf("���ڸ� �Է��ϼ���");
	scanf("%d", &num);
	num % 2 == 0 ? printf("¦�� �Դϴ�.") : printf("Ȧ�� �Դϴ�.");
}*/


/*int main()
{
	int x, y, max;
	printf("�ΰ��� ���� �Է�:");
	scanf("%d %d", &x, &y);

	if (x > y)
	{
		max = x;
		printf("%d", max);

	}
	else
	{
		max = y;
		printf("%d", max);

	}
}*/

int main()
{
	int num1, num2, opt, result;
	printf("1����, 2����, 3����, 4������ ��ȣ����>>");
	scanf("%d", &opt);
		printf("�����Ϸ��� �� �� �Է� >>");
	scanf("%d %d", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else
		result = num1 / num2;
	printf("��� %d\n", result);
	return 0;
}
	