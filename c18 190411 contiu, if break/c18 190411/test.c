#include <stdio.h>
int main()
{
	int i;
	int j;
	int n;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < n - i + 1; j++)
		{
			printf(" ");
		}
		printf("*");
		for (j = 1; j <= i - 1; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= i - 1; j++)
		{
			printf(" ");
		}
		printf("*");
		
		printf("\n");
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i - 1; j++)
		{
			printf(" ");
		}
		printf("*");
		for (j = 1; j < n - i + 1; j++)
		{
			printf(" ");
		}
		for (j = 1; j < n - i + 1; j++)
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
}