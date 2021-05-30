#include <stdio.h>
/*int main()
{
	int i;
	int j;
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	
	for (i = 1; i <= num1; i++)
	{
		for (j = 1; j <= num2; j++)
			printf("%d %d\n", i, j);
	}

}*/

/*int main()
{
	int i;
	int j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			printf("%d", i); //printf("*");
		}
		
		printf("\n");
	} 
}*/

/*int main() //역 직각 삼각형
{
	int i;
	int j;
	for (i = 1; i <= 4; i++)
	{
		for (j = 4; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}*/

int main() //직각 삼각형
{
	int i;
	int j;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
/*int main() //좌우반전 직각 삼각형
{
	int i;
	int j;
	int s;
	for (i = 1; i <= 4; i++)
	{
		for (s = 3; s >= i; s--) //s 대신에 j를 쓸 수 있다 밑에서 다시 초기화를 해주기 때문
		{// 두번째 for문은 3번실행하고 다시 s값을 확인하면서 1번더 실해하여 총 4번 실행하게된다.
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}*/
