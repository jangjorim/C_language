#include <stdio.h>
/*int main()//��� ���ϱ�
{
	int n, i;
	printf("���� ���� �Է�>>");
	scanf("%d", &n);
	for (i = n; i > 0; i--)
	{
		if (n % i == 0)
		{
			printf("%d  ", i);
		}
	}
}*/

/*int main()
{
	for (int i = 1; i <= 100; i++) //���϶� ����
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}*/

/*int main()
{
	int i;
	int a,b;
	int sum = 0;
	printf("ó������ ������ ���� �Է��ϼ��� ");
	scanf("%d %d", &a, &b);


	for (i = a; i <= b; i++)
	{
		sum = sum + i;
	}
	printf("%d ���� %d ������ SUM = %d �Դϴ�.", a, b, sum);
}*/

/*int main()
{
	int a;                          //char i;


	for (a = 65; a <= 90; a++)    // (i = 'A'; i <= 'Z'; i++)
	{
		printf("%c ", a);
	}
}*/

/*int main()
{
	int i; //1~20 ���� Ȧ�� ��� �ڵ� 
	for (i = 1; i <= 20; i++) //for(i = 1; i <= 20; i += 2)
	{
		if (i % 2 == 1)
		{
			printf("%d  ", i);
		}
	}
}*/

/*int main()
{
	int a;
	int b;
	int sum = 0;
	float c;
	for (a = 1; a <= 5; a++)
	{
		scanf("%d", &b);
		sum = sum + b;
	} 

	c = (float)sum / 5; //��������ȯ ���� �տ� �ڽ��� ���ϴ� ���� ()�ȿ� ����. //c = sum / 5.0 ���� ���ڸ� �Ҽ������� ���� �ȴ�
	printf("���� : %d  ��� : %.2f", sum, c);
}*/

/*int main()
{
	int dan, n;
	for (n = 1; n <= 9; n++)
	{
		for (dan = 2; dan <= 9; dan++)
			printf("%d * %d = %d\t", dan, n, n * dan); //\t �� �ϸ� ���ĵȴ�
		printf("\n");
	}
}*/

int main()  // ����
{
	int a[5][5] = { 0 };
	int i, j, k = 1;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			a[5][5] = k++;
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d", a[i][j]);
		printf("\n");
	}
	return 0;
}