#include <stdio.h>
/*void line();// 프로토타입 (함수 원형)
int main()
{
	line(); //함수 호출 ,반환값 x , 매개변수 x
	printf("광주소프트웨어마이스터고\n");
	line();
}
void line() // 함수 정의
{
	printf("=========================\n");
	printf("=========================\n");
}*/

/*int square(int a);
int main()
{
	int result;
	result = square(5);
	printf("%d\n", result);
}
int square(int n)
{
	return n * n; // a * a 한 값을 return해준다.
}*/

/*int getnum();
int main()
{
	int num;
	num = getnum();// < --------------------
	printf("입력받은 숫자 : %d", num);//    |
}                                 //        |
int getnum()                      //        |
{                                 //        |
	int a ;                       //        |
	printf("숫자를 입력하세요."); //        |
	scanf("%d", &a);              //        |
	return a; // - - - - - - - - - - - - - -
}*/

/*char PRINT(char a, int b);
int main()
{
	PRINT('A', 5);
	return 0;
}

char PRINT(char a, int b)
{
	int i;
	for (i = 0; i < b; i++)
	{
		printf("% c", a);
	}
}*/


/*int get_large(int x, int y);
int main()
{
	int a, b;
	printf("크기를 비교할 두 개의 정수를 입력하세요: >");
	scanf("%d %d", &a, &b);
	printf("두 수 중에서 큰수는 %d 입니다.", get_large(a, b));
}

int get_large(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}*/

/*int print_star(int n);
int main()
{
	int n;
	scanf("%d", &n);
	print_star(n);
	return 0;
}

int print_star(int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/

int main()
{
	int n;
	while (1)
	{
		printf("누적 합을 구할 짝수를 입력하세요.\n");
		scanf("%d", &n);
		if (n % 2 == 0)
		{
			printf("%d 까지의 합은 %d 입니다.", n, even_sum(n));
			break;
		}
		else
		{
			printf("짝수가 아닙니다.\n");
			continue;
		}
		return 0;
	}
}

int even_sum(int n)
{
	int sum = 0;
	while (1)
	{
		if (n != 0)
		{
			sum = sum + n;
			n = n - 2;
		}
		if (n == 0)
			break;
	}
	return sum;
}
