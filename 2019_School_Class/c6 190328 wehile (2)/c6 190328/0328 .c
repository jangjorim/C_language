#include <stdio.h>
/*int main()
{
	int month;
	printf("월을 입력하세요(1월에서 5월 까지만)>>");
	scanf("%d", &month);

	if (month == 1)
	{
		printf("january");
	}
	else if (month == 2)
	{
		printf("feburary");
	}
	else if (month == 3)
	{
		printf("march");
	}
	else if (month == 4)
	{
		printf("april");
	}
	else if (month == 5)
	{
		printf("may");
	}
	else
		printf("잘못 입력하셨습니다.");
	return 0;

}*/

/*int main()
{
	int month;
	printf("월을 입력해주세요.");
	scanf("%d", &month);

	switch (month) //조건이 될 변수 설정
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31일 까지 입니다.");
		break;

	case 2:
		printf("28일 또는 29일 까지 입니다.");
		break;

	case 4: //defaulf를 사용해도 된다.
	case 6:
	case 9:
	case 11:
		printf("30일 까지 입니다.");
		break;
	}
		return 0;
}*/

/*int main()
{
	char op;
	int x, y, result;
	printf("수식을 입력하세요.");
	scanf("%d %c %d", &x, &op, &y);
	switch (op) //char형도 문자가 들어갈수있다 *단 실수 문자열은 안된다
	{
	case '+':
		result = x + y;
		printf("%d", result);
		break;

	case '-':
		result = x - y;
		printf("%d", result);
		break;

	case '/':
		result = x / y;
		printf("%d", result);
		break;

	case '*':
		result = x * y;
		printf("%d", result);
		break;

	default :
		printf("수식을 잘못 입력 하셨습니다.");

	}
	printf("이고 \n\n식은%d %c %d = %d입니다.", x, op, y, result);
	return 0;
}*/

/*int main()
{
	char grade;
	printf("A, B, C, D, F 중에서 학점을 고르세요>>");
	scanf("%c", &grade);

	switch (grade)
	{
	case 'A':
		printf("excellent");
		break;

	case 'B':
	case 'C':
		printf("goooooooooood");
		break;

	case 'D':
		printf("sad");
		break;

	case 'F':
		printf("fail");
		break;

	default :
		printf("그외의 입력은 잘못된 입력입니다.");

	}
	return 0;
}*/


/*int main()
{
	while ( 1 ) //1 이면 참 
	{
		printf("hello gsm");  //조건식이 true 일때 실행될 문장

	}
}*/

/*int main()
{
	int num = 0;
	int sum = 0;
	
	while (num < 10)
	{
		num = num + 1 ; //num++; 도가능하다
		sum = sum + num;
	}
	printf("%d", sum);
	return 0;
}*/
