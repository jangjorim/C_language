#include <stdio.h>
/*int main()
{
	int i;
	int j;

	for (i = 1; i <= 4; i++) //i==1, j ==5, 4, 3, 2 //i==2, j ==5, 4, 3
	{ 
		for (j = 1; j <= i - 1; j++)
		{
			//i==1 , j  //i==2, j==1, //i==3, j==1,2
			printf(" ");
		}
		for (j = 5 ; j >= i + 1; j--)
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

	for (i = 1; i <= 5; i++)
	{
		for (j = 5; j >= i; j--) 
		{
			printf(" ");
		}
		for (j = 1;j <= i * 2 - 1 ; j++) 
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
	printf("숫자입력>>");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)//j =1 j <= i
		{
			printf("%d", j);
		}
		printf("\n");
	}
}*/

int main()
{
	int i;
	int j;
	int n;
	int num = 0;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)// j= 1 j <=  j++
		{
			num = num + 1;
			printf("%2d ", num);
		}
		printf("\n");
	}
}

/*int main() //숙제
{
	int i;
	int j;

	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= i; j++)// j = 1  j = i 1= 1 i 2 j++
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 3; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)//j = 1 i= 3  j<= i j++
		{
			printf("*");
		}
		printf("\n");
	}
}*/