#include <stdio.h> 
/*int main()//커졌다가 작아지는 삼각형
{
	int i; 
	int j;
	int n;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++) //j = 1  i= 1   1 
		{
			printf("*");
		}
		
		printf("\n");
	}
	for (i = 1; i <= n - 1; i++) //i = 1 i <= n -1
	{
		for (j = 1; j <= n - i; j++)//j = 1   j<= 3 j++
		{
			printf("*");
		}
		printf("\n");
	}
}*/
/*int main() //피라미드
{
	int i;
	int j;
	int n;
	scanf("%d", &n);

	for (i = 1; i <=(n / 2) + (n % 2); i++)
	{
		for (j = 1; j <= (n / 2) - i + 1; j++) // j = 1 i =1  1  
		{
			printf(" ");
	    }
		for (j = 1; j <= i * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/

/*int main()
{
	int i;
	int j;
	int n;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i - 1; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/

/*int main()
{
	int i;
	int j;
	int n;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++) //j 1 i 1  1 <= i + n -1 j++
		{
			printf(" ");
		}
		for (j = 1; j <= n; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/

/*int main()
{
	int i;
	int j;
	int n1;
	int n2;
	int n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	
	
}*/