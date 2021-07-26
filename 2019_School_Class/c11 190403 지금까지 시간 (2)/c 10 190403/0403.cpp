#include <stdio.h>
										#include <stdlib.h>
										#include <time.h>
/*int main()
{
	int answer = 59;
	int guess;
	int tries = 0;

	do
	{
		printf("정답을 입력하세요");
		scanf("%d", &guess);
		if (guess < answer) // 59라는 숫자보다 answer를 쓰는 것이 좋다 숫자를 바꾸기 불편하기 때문
			printf("up");
		if (guess > answer)
			printf("down");
	
		tries++;
	} while (guess != answer);
		printf("perfect");
		printf("시도 횟수 %d", tries); //tries - 1를 해야 출력값에서 1이 빼짐 tries-- 는 안됨
}*/

int main()
{
	srand(time(NULL)); //1970년 부터 지금까지의 시간을 초 로 계산
	int a;
	a = rand() % 100 + 1; //rand 0 ~n 까지의 난수를 발생 %10을 하면 0~9까지의 수 발생 %100하면 0~99까지의 수 발생
	printf("%d\n", a);
}

/*int main()
{
	srand(time(NULL));
	int answer = rand()%100 + 1; //srand(time(NULL));는 rand 함수의 값을 초로 계산하며 값이 커짐 + 1를 하면 1~10
	int guess;
	int tries = 0;

	do
	{
		printf("정답을 입력하세요");
		scanf("%d", &guess);
		if (guess < answer) // 59라는 숫자보다 answer를 쓰는 것이 좋다 숫자를 바꾸기 불편하기 때문
			printf("up\n");
		if (guess > answer)
			printf("down\n");

		tries++;
	} while (guess != answer);
		printf("perfect");
		printf("시도 횟수 %d", tries); //tries - 1를 해야 출력값에서 1이 빼짐 tries-- 는 안됨
}*/

/*int main()
{
	int sum = 0;
	for (int i = 1; i < 11; i++) // for()안에 함수선언을 하면 for 안에서만 쓸 수 있다.
		
	{
		sum = sum + i;
	}
	printf("%d\n", sum);
}*/

/*int main() // 1+ 2+ 3+ 4....+n 까지의 합
{
	int i;
	int sum = 0;
	int s; //입력되는 값은 = 0 처럼 선언을 하지 않아도 된다.
	scanf("%d", &s);
	for (i = 1; i <= s; i++)
	{
		sum = sum + i;
		
	}
	printf("%d", sum);
}*/

/*int main()
{
	int i;
	int s;
	int sum = 0;
	scanf("%d", &s); //& 잊지말고 쓰자
	for (i = 1; i <= s; i++)
	{
		sum = sum + i * i;
		//printf("%d\n", sum); 숫자가 커지는 값을 순서대로 볼 수 있다
	}
	printf("%d", sum);
}*/

/*int main()
{
	int i;
	int s;
	scanf("%d", &s);
	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", s, i, i*s);
	}
}*/

/*int main()
{
	int s;
	int i;
	printf("양의 정수 입력");
	scanf("%d", &s);

	for (i = 1; i <= s; i++)
	{
		if (s % i == 0)
		{
			printf("%d  ", i);
		}
	}

}*/