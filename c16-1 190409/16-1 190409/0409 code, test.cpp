#include <stdio.h>	
/*int main() //�ֻ���
{
	int i;
	int j;
	
	for (i = 1; i <= 1; i++)
	{
		for (j = 1; j <= 6; j++)
			printf("%d %d\n", i, j);
	}
}*/

/*int main()  //�ﰢ��  
{
	int i;
	int j;
	int n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/

/*int main()  //���ﰢ��
{
	int i;
	int j;
	int n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = n; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/

int main()  // �����ִ� ���ﰢ��
{
	int i;
	int j;
	int n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i - 1; j++)
		{
			printf("a");
		}
		for (j = n; j >= i; j--)
		{
			printf("*");
		}
	
		printf("\n");
	}
	return 0;
}
