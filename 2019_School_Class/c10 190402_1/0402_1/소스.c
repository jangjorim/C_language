#include <stdio.h>
int main()
{

	char grade;
	printf("A,B,C,D,F �� ������ ������");
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
		printf("�׿��� �Է��� �߸��� �Է� �Դϴ�");
		break;
	}

}