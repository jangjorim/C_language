#include <stdio.h>
/*int main()
{
	int n, i; //��� ���ϴ� ��
	printf("���� ���� �Է� >>");
	scanf("%d", &n);
	for (i = n; i >= 1; i--)
	{
		if (n % i == 0)
		printf("%d  ", i);
		
	}

}*/

/*int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%d\n", i);

	}
	return 0;
}*/

int main()
{
	int i;
	int a, b;
	int sum = 0;
	printf("ó������ ������ ���� �Է��ϼ���");
	scanf("%d %d", &a, &b);

	for (i = a; i <= b; i++)
	{
		sum = sum + i;
		printf("%d\n", sum); //���ڰ� �����ϴ� ������ �� �� ����
	}
	printf("%d ���� %d ������ SUM = %d �Դϴ�.", a, b, sum);
}

