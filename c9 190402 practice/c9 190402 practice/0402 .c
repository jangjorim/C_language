#include <stdio.h>
/*int main()
{
	char grade;
	printf("����� �Է��ϼ��� A,B,C,D,F\n");
	scanf("%c", &grade);

	switch (grade)
	{
	case 'A':
		printf("�����մϴ�!!");
		break;
	case 'B':
	case 'C':
		printf("������~~");
		break;
	case 'D':
		printf("����");
		break;
	case 'F':
		printf("��");
		break;

	default :
		printf("�߸��� �Է��Դϴ�.");
		break;
	}
	printf("%c", grade);
	return 0;
}*/
/*int main()
{
	int i = 1;
	while (i < 10)
	{

		printf("4 * %d = %d\n", i, 4 * i);
		i = i + 1;

	}

}*/

/*int main()
{
	int i = 1;
	int s = 2;
	int sum = 0;//���� �ϳ���


	while (i < 99)
	{
		
		printf("%d/%d+ ", i ,s);
			i++;
			s++;
	}
	printf("%d/%d", 99, 100);
}*/

/*int main()
{
	int i = 1;

	while (i < 99)
	{
		printf("%d/%d+ ", i, i + 1);
		i = i + 1;
	}
	printf("%d/%d", 99, 100);
}*/

/*int main()
{
	int dan;
	int i = 1;
	printf("���� �Է��ϼ���.>>");
	scanf("%d", &dan);
	while (i <= 9)
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
		i++;
	}
}*/

/*int main()
{
	int count;
	printf("���ڸ� �Է��ϼ���. >>");
	scanf("%d", &count);

	while (count >= 0)
	{
		printf("%d\n", count);
		count--;
	}
	printf("ī��Ʈ ����");
}*/

/*int main()
{
	int number;
	int sum = 0;
	
	number = 1;
	while (number <= 100)
	{
		if (number % 7 == 0)
		{
			sum = sum + number;
		}
		number++;
	}
	printf("1���� 100������ ��� 7�� ����� ���� %d �Դϴ�. \n", sum);
}*/

/*int main()
{
	int number = 100;
	
	while (number >= 1)
	{
		if (number % 3 == 0 && number % 5 == 0) // �� �ڿ� ; ��������
		{
			printf("%d\n", number);
		}
		number--;
	}
}*/

/*int main()
{
	int i;
	do
	{
			printf("�޴��� ������ �ּ��� \n");
			printf("1 ��� \n");
			printf("2 � \n");
			printf("3 ���� Ƣ�� \n");
			scanf("%d", &i);

	} while (i < 1 || i > 3); // ||�� or �����ڷ� �ϳ��� ���̵Ǵ��� ��� �ݺ��ǰԵȴ�.
	printf("���õ� �޴��� %d", i);
}*/

int main()
{
	int value, total = 0, count = 1;
	do
	{
		printf("���ڸ� �Է��ϼ���.");
		scanf("%d", &value); 
		count++;             
		total = total + value; // total += value ����ص� ����

	} while (count < 6);
	printf("�Է��� ������ �� �հ�� %d �Դϴ�.", total);

}