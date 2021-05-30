#include <stdio.h>
/*int main()
{
	int i;
	int j;
	int n;
	char s = 'A';
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i + 1; j++)
		{
			printf("%2c", s); // c 앞에 숫자를 넣으면 "공백숫자" 로 출력된다.
			s = s + 1;
		}
		printf("\n");
	}
}*/

/*int main()
{
	int i;
	int j;
	int n1 = 0;
	int n2 = 1;
	char s = 'A';
	scanf("%d", &n1);

	for (i = 1; i <= n1; i++)
	{
		for (j = 1; j <= n1 - i; j++)
		{
			printf("%2d", n2++);
		}
		for (j = 1; j <= i; j++)//1 n i = 1 
		{
			printf("%2c", s);
			s = s + 1;
		}
		printf("\n");
	}
}*/

/*int main()
{
	int num = 0, sum = 0;

	while (1) //break가 들어가는 반복문은 for, while, do while, switch case 에서 쓴다
	{
		num = num + 1;
		sum = sum + num;
		if (num >= 10)
			break;
	}
	printf("%d", sum);
}*/

/*int main()
{
	char c;
	
	for (;;)
	{
		scanf("%c", &c);

		if (c == 'e') //같다는 =를 2개로 ==로 쓴다 까먹지 말자
			break;
	}
	return 0;
}*/

/*int main()
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		if (i % 3 == 0)
			continue; //일정한 조건이 되면 다시 자신과 가까운 for로 돌아간다
		printf(" %d", i);
	}
}*/

int main()
{
	int i = 0;

	for (;;)
	{
		i = i + 1;
		if (i % 10 != 3)
			continue;

		printf("%d\n", i);

		if (i == 103)
			break;	
	}
}