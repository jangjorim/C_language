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

/*int main() //�� ���� �ﰢ��
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

int main() //���� �ﰢ��
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
/*int main() //�¿���� ���� �ﰢ��
{
	int i;
	int j;
	int s;
	for (i = 1; i <= 4; i++)
	{
		for (s = 3; s >= i; s--) //s ��ſ� j�� �� �� �ִ� �ؿ��� �ٽ� �ʱ�ȭ�� ���ֱ� ����
		{// �ι�° for���� 3�������ϰ� �ٽ� s���� Ȯ���ϸ鼭 1���� �����Ͽ� �� 4�� �����ϰԵȴ�.
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}*/
