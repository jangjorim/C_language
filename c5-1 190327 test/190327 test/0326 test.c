#include <stdio.h>
/*int main()
{
	int i = 13, j = 5, temp;
	printf("%d %d\n", i == 13 && j == 5, i == 13 && j == 4);
	printf("%d %d\n", i == 13 || j == 4, i == 12 || j == 4);
	temp = i; printf("%d", !temp); // %d뒤에 띄어 쓰기를 하지 않으면 01로 둘이 붙여서 나온다
	temp = 0; printf(" %d", !temp); // 여기에 있는 %d 앞에 띄어쓰기를 해도 0 1로 나온다
	return 0;
}*/

/*int main()
{
	int i = 13;
	int j = 5;
	printf("%d %d %d %d", i&j, i | j, i^j, ~i); // ~i 에대해서 질문
	return 0;
}*/

/*int main()
{
	int number;
	printf("숫자를 입력하세요");
	scanf("%d", &number);
	if (number > 0)
	{
		printf("양수입니다.");
	}
	else
	{
		printf("양수가 아닙니다.");
	}
}*/

/*int main()
{
	int number;
	printf("정수를 입력해 주세요");
	scanf("%d", &number);

	if (number % 2 == 0)
	{
		printf("짝수 입니다.");
	}
	else
	{
		printf("홀수 입니다.");
	}
	return 0;
}*/
int main()
{
	int num;
	printf("숫자를 입력하세요");
	scanf("%d", &num);
	num % 2 == 0 ? printf("짝수 입니다.") : printf("홀수 입니다.");
}

