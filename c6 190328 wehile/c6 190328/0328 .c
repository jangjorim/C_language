#include <stdio.h>
/*int main()
{
	int month;
	printf("���� �Է��ϼ���(1������ 5�� ������)>>");
	scanf("%d", &month);

	if (month == 1)
	{
		printf("january");
	}
	else if (month == 2)
	{
		printf("feburary");
	}
	else if (month == 3)
	{
		printf("march");
	}
	else if (month == 4)
	{
		printf("april");
	}
	else if (month == 5)
	{
		printf("may");
	}
	else
		printf("�߸� �Է��ϼ̽��ϴ�.");
	return 0;

}*/

/*int main()
{
	int month;
	printf("���� �Է����ּ���.");
	scanf("%d", &month);

	switch (month) //������ �� ���� ����
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31�� ���� �Դϴ�.");
		break;

	case 2:
		printf("28�� �Ǵ� 29�� ���� �Դϴ�.");
		break;

	case 4: //defaulf�� ����ص� �ȴ�.
	case 6:
	case 9:
	case 11:
		printf("30�� ���� �Դϴ�.");
		break;
	}
		return 0;
}*/

/*int main()
{
	char op;
	int x, y, result;
	printf("������ �Է��ϼ���.");
	scanf("%d %c %d", &x, &op, &y);
	switch (op) //char���� ���ڰ� �����ִ� *�� �Ǽ� ���ڿ��� �ȵȴ�
	{
	case '+':
		result = x + y;
		printf("%d", result);
		break;

	case '-':
		result = x - y;
		printf("%d", result);
		break;

	case '/':
		result = x / y;
		printf("%d", result);
		break;

	case '*':
		result = x * y;
		printf("%d", result);
		break;

	default :
		printf("������ �߸� �Է� �ϼ̽��ϴ�.");

	}
	printf("�̰� \n\n����%d %c %d = %d�Դϴ�.", x, op, y, result);
	return 0;
}*/

/*int main()
{
	char grade;
	printf("A, B, C, D, F �߿��� ������ ������>>");
	scanf("%c", &grade);

	switch (grade)
	{
	case 'A':
		printf("excellent");
		break;

	case 'B':
	case 'C':
		printf("goooooooooood");
		break;

	case 'D':
		printf("sad");
		break;

	case 'F':
		printf("fail");
		break;

	default :
		printf("�׿��� �Է��� �߸��� �Է��Դϴ�.");

	}
	return 0;
}*/


/*int main()
{
	while ( 1 ) //1 �̸� �� 
	{
		printf("hello gsm");  //���ǽ��� true �϶� ����� ����

	}
}*/

/*int main()
{
	int num = 0;
	int sum = 0;
	
	while (num < 10)
	{
		num = num + 1 ; //num++; �������ϴ�
		sum = sum + num;
	}
	printf("%d", sum);
	return 0;
}*/
