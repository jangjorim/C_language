#include <stdio.h>

int main()
{
	int s = 10, c = 20, sum = s + c;

	float avg = sum / 2;

	printf("첫번째 수는 %d 이고 두번째 수는 %d 일때\n", s, c);

	printf("두 수의 합은 %d 입니다.\n", sum);

	printf("그리고 두 수의 평균은 %.1lf입니다", avg);

	return 0;
}