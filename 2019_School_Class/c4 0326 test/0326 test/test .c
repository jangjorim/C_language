#include <stdio.h>

 /*char main()
{
	char a;
	
	scanf("%c", &a);
	printf("%c", a);
}*/

/*#include <stdio.h>
int main()
{
	int num;
	printf("숫자를 입력하세요.");
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		printf("짝수입니다.");
	}
	else
	{
		printf("홀수 입니다.");
	}
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int num;
	printf("숫자를 입력하세요.");
	scanf("%d", &num);
	num % 2 == 0 ? printf("짝수 입니다.") : printf("홀수 입니다.");

}*/

/*#include <stdio.h>
int main()
{
	int x, y, max;
	printf("두개의 정수를 입력");
	scanf("%d %d", &x, &y);

	if (x > y)
	{
		max = x;
		printf("%d", max);

	}
	else
	{
		printf("%d", y);

	}
}*/
int main()
{
	int i, j;
	int arr[5] = { 0 };
	int n;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &n);
		arr[i] = n;
		//n % 2 == 0 ? printf("짝수 입니다.\n") : printf("홀수 입니다.\n");
		if (n % 2 == 0)
		{
			printf("짝수 입니다.\n");
		}
		else
		{
			printf("홀수 입니다.\n");
		}	
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
}





