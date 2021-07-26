#include <stdio.h>	
/*int main() //주사위
{
	int i;
	int j;
	
	for (i = 1; i <= 1; i++)
	{
		for (j = 1; j <= 6; j++)
			printf("%d %d\n", i, j);
	}
}*/

/*int main()  //삼각형  
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

/*int main()  //역삼각형
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

int main()  // 공백있는 역삼각형
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
