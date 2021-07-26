#include <stdio.h>
/*int main()
{
	int i = 13, j = 5, temp;
	printf("%d %d\n", i == 13 && j == 5, i == 13 && j == 4); //&& 두개 모두 참이여야 참
	printf("%d %d\n", i == 13 || j == 4, i == 12 || j == 4); //|| 둘중 하나가 참이면 참 둘다 같아도 참
	temp = i; 
	printf("%d", !temp); // %d뒤에 띄어 쓰기를 하지 않으면 01로 둘이 붙여서 나온다 // ! 참이면 거짓 거짓이면 참
	temp = 0; 
	printf(" %d", !temp); //여기에 있는 %d 앞에 띄어쓰기를 해도 0 1로 나온다       // !!
	return 0;
}*/


/*int main()
{
	int i = 13;
	int j = 5;
	printf("%d %d %d %d", i&j, i | j, i^j, ~i);
	return 0;
}*/

/*int main() //시프트 연산자
{
	int i = 13;
	int j = 5;
	printf("%d %d %d %d", i << 2, i >> 2, j << 3, j >> 3);
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
	int num;
	printf("숫자를 입력하세요");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("짝수 입니다.");
	}

	else
	{
		printf("홀수 입니다.");
	}
}*/

/*int main()

{
	int num;
	printf("숫자를 입력하세요");
	scanf("%d", &num);
	num % 2 == 0 ? printf("짝수 입니다.") : printf("홀수 입니다.");
}*/


/*int main()
{
	int x, y, max;
	printf("두개의 정수 입력:");
	scanf("%d %d", &x, &y);

	if (x > y)
	{
		max = x;
		printf("%d", max);

	}
	else
	{
		max = y;
		printf("%d", max);

	}
}*/

int main()
{
	int num1, num2, opt, result;
	printf("1덧셈, 2뺄셈, 3곱셈, 4나눗셈 번호선택>>");
	scanf("%d", &opt);
		printf("연산하려는 두 수 입력 >>");
	scanf("%d %d", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else
		result = num1 / num2;
	printf("결과 %d\n", result);
	return 0;
}
	