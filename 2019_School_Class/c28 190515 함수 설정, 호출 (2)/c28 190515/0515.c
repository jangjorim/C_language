#include <stdio.h>
/*void line();// ������Ÿ�� (�Լ� ����)
int main()
{
	line(); //�Լ� ȣ�� ,��ȯ�� x , �Ű����� x
	printf("���ּ���Ʈ����̽��Ͱ�\n");
	line();
}
void line() // �Լ� ����
{
	printf("=========================\n");
	printf("=========================\n");
}*/

/*int square(int a);
int main()
{
	int result;
	result = square(5);
	printf("%d\n", result);
}
int square(int n)
{
	return n * n; // a * a �� ���� return���ش�.
}*/

/*int getnum();
int main()
{
	int num;
	num = getnum();// < --------------------
	printf("�Է¹��� ���� : %d", num);//    |
}                                 //        |
int getnum()                      //        |
{                                 //        |
	int a ;                       //        |
	printf("���ڸ� �Է��ϼ���."); //        |
	scanf("%d", &a);              //        |
	return a; // - - - - - - - - - - - - - -
}*/

/*char PRINT(char a, int b);
int main()
{
	PRINT('A', 5);
	return 0;
}

char PRINT(char a, int b)
{
	int i;
	for (i = 0; i < b; i++)
	{
		printf("% c", a);
	}
}*/


/*int get_large(int x, int y);
int main()
{
	int a, b;
	printf("ũ�⸦ ���� �� ���� ������ �Է��ϼ���: >");
	scanf("%d %d", &a, &b);
	printf("�� �� �߿��� ū���� %d �Դϴ�.", get_large(a, b));
}

int get_large(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}*/

/*int print_star(int n);
int main()
{
	int n;
	scanf("%d", &n);
	print_star(n);
	return 0;
}

int print_star(int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/

int main()
{
	int n;
	while (1)
	{
		printf("���� ���� ���� ¦���� �Է��ϼ���.\n");
		scanf("%d", &n);
		if (n % 2 == 0)
		{
			printf("%d ������ ���� %d �Դϴ�.", n, even_sum(n));
			break;
		}
		else
		{
			printf("¦���� �ƴմϴ�.\n");
			continue;
		}
		return 0;
	}
}

int even_sum(int n)
{
	int sum = 0;
	while (1)
	{
		if (n != 0)
		{
			sum = sum + n;
			n = n - 2;
		}
		if (n == 0)
			break;
	}
	return sum;
}
