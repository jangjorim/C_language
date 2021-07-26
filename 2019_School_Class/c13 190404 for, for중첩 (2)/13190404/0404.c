#include <stdio.h>
/*int main()//약수 구하기
{
	int n, i;
	printf("양의 정수 입력>>");
	scanf("%d", &n);
	for (i = n; i > 0; i--)
	{
		if (n % i == 0)
		{
			printf("%d  ", i);
		}
	}
}*/

/*int main()
{
	for (int i = 1; i <= 100; i++) //참일때 실행
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}*/

/*int main()
{
	int i;
	int a,b;
	int sum = 0;
	printf("처음수와 마지막 수를 입력하세요 ");
	scanf("%d %d", &a, &b);


	for (i = a; i <= b; i++)
	{
		sum = sum + i;
	}
	printf("%d 부터 %d 까지의 SUM = %d 입니다.", a, b, sum);
}*/

/*int main()
{
	int a;                          //char i;


	for (a = 65; a <= 90; a++)    // (i = 'A'; i <= 'Z'; i++)
	{
		printf("%c ", a);
	}
}*/

/*int main()
{
	int i; //1~20 까지 홀수 출력 코드 
	for (i = 1; i <= 20; i++) //for(i = 1; i <= 20; i += 2)
	{
		if (i % 2 == 1)
		{
			printf("%d  ", i);
		}
	}
}*/

/*int main()
{
	int a;
	int b;
	int sum = 0;
	float c;
	for (a = 1; a <= 5; a++)
	{
		scanf("%d", &b);
		sum = sum + b;
	} 

	c = (float)sum / 5; //강제형변환 변수 앞에 자신이 원하는 형을 ()안에 쓴다. //c = sum / 5.0 으로 숫자를 소숫점으로 만들어도 된다
	printf("총점 : %d  평균 : %.2f", sum, c);
}*/

/*int main()
{
	int dan, n;
	for (n = 1; n <= 9; n++)
	{
		for (dan = 2; dan <= 9; dan++)
			printf("%d * %d = %d\t", dan, n, n * dan); //\t 을 하면 정렬된다
		printf("\n");
	}
}*/

int main()  // 수아
{
	int a[5][5] = { 0 };
	int i, j, k = 1;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			a[5][5] = k++;
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d", a[i][j]);
		printf("\n");
	}
	return 0;
}