#include <stdio.h>
/*int main()
{
	int n, i; //약수 구하는 식
	printf("양의 정수 입력 >>");
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
	printf("처음수와 마지막 수를 입력하세요");
	scanf("%d %d", &a, &b);

	for (i = a; i <= b; i++)
	{
		sum = sum + i;
		printf("%d\n", sum); //숫자가 증가하는 과정을 볼 수 있음
	}
	printf("%d 부터 %d 까지의 SUM = %d 입니다.", a, b, sum);
}

