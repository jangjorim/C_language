#include <stdio.h>

/*int main()
{
	int score;
	printf("������ �Է� >>");
	scanf("%d", &score);

	if (score >= 90)
	{
		putchar('A');
	}
	else if (score >= 80)
	{
		putchar('B');
	}
	else if (score >= 70)
	{
		putchar('c');
	}
	else if (score >= 60)
	{
		printf("D");
	}
}*/

#include <stdio.h>
/*int main()
{
	char op;
	int x, y, result;
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	
	printf("%d", result);
}*/


#include <stdio.h>
/*int main()
{
	int number;
	printf("0,1,2,3 �߿��� �Է��ϼ���\n");
	scanf("%d", &number);

	if (number == 0)

	{
		printf("zero");
	}
	else if (number == 1)
	{
		printf("one");
	}
	else if (number == 2)
	{
		printf("two");
	}
	else if (number == 3)
	{
		printf("three");
	}
	else
	{
		printf("�� ���� �Է��� '�߸� �Ǿ����ϴ�.'");
	}
	return 0;
}*/

#include <stdio.h>
int main()
{
	int month;
	printf("���� �Է��ϼ���(1��~5��������)>>");
	scanf("%d", &month);

	switch (month)
	{
	case 1:
		printf("january");
		break;

	case 2:
		printf("feburary");
		break;

	case 3:
		printf("march");
		break;

	case 4:
		printf("april");
		break;

	case 5:
		printf("may");
		break;
	}
}
