#include <stdio.h>
/*int main()
{
	int i = 1;

	while (i < 10)
	{
		printf("4 * %d = %d\n", i, i*4);
		i = i + 1;
	}

}*/

/*int main()
{
	int dan;
	int i = 1;
	printf("���� �Է��ϼ���");
	scanf("%d", &dan);
	while (i < 10) //(i <= dan)�� �ϸ� 16�Է½� 16*16���� ����Ѵ�
	{
		printf("%d * %d = %d\n",dan, i, dan * i);
		i++;
	}
}*/


/*int main()

{
	int count;
	printf("���ڸ� �Է��ϼ���.");
	scanf("%d", &count);

	while (count > 0)
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
	while (number<101)
	{
		if (number % 7 ==0)
		{
			sum = sum + number; //sum +=number ����
			printf("%d\n", sum);
		}
		number++;
	}
	printf("1���� 100������ ��� 7�� ����� ���� %d �Դϴ�.\n", sum);
}*/


/*int main()
{
	int number = 1;

	while (number < 101)
	{
		if (number % 3 == 0 && number % 5 == 0) // number % 3 �̷��� ������ ������ == 0 �̶�� ���� ������Ű�� ���ϱ� ����
		{
			printf("%d\n", number);
		}
		number++;
	}
}*/

/*int main()
{
	int i;
	do
	{
		printf("�Ŵ��� �����ϼ��� \n");
		printf("1 ��� \n");
		printf("2 ���� \n");
		printf("3 �踻�� \n");
		scanf("%d", &i);

	} while (i < 1 || i > 3);

	printf("���õ� �޴��� %d", i);
	return 0;
}*/

/*int main()
{
	int value, total = 0, i = 1;
	do
	{
		printf("���ڸ� �Է��ϼ���");
		scanf("%d", &value);
		i++;                   // i++�� total = total + value �� ������ �ٲ㵵 ��� ����.
		total = total + value; //
	} while (i < 6);

	printf("�Է��� ������ �� �հ� %d", total);
}*/

/*int main()
{
	int sum = 0, num = 0;
	do
	{
		printf("������ �浵�ϼ���(0�� ����, �浵�� �Է�)");
		scanf("%d", &num);
		sum += num;

	} while (num != 0); // not �϶� ���̵ǰ� �Ҷ��� !=
	printf("�Է��� ������ �� �հ� %d", sum);

}*/

	
/*int main()
{
	int num;
	int sum2 = 0; //¦���� ����
	int sum1 = 0; //Ȧ���� ���� 
	do
	{
		printf("������ �Է��� �ּ��� 0�� �Է��ϸ� ���� �˴ϴ�.");
		scanf("%d", &num);
		if (num % 2 == 0)
			sum2++;
		else
			sum1++;

	} while (num != 0);
	printf("Ȧ���� ������ %d �̰� ¦���� ������ %d �Դϴ�.", sum1, sum2 - 1);
}*/
