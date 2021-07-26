#include <stdio.h>
int main()
{

	char grade;
	printf("A,B,C,D,F 중 학점을 고르세요");
	scanf("%c", &grade);
	switch (grade)
	{
	case 'A':
		printf("excellent");
		break;

	case 'B':
	case 'C':
		printf("good");
		break;
	case 'D':
		printf("sad");
		break;
	case 'F':
		printf("fail");
		break;
	default:
		printf("그외의 입력은 잘못된 입력 입니다");
		break;
	}

}