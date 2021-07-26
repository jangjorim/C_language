/*#include <stdio.h>
int main()
{
	int age;
	double weight;
	char blood;

	printf("몸무게를 입력 해 주세요");

	scanf("%lf", &weight);

	printf("나이를 입력해 주세요");
	scanf("%d", &age);

	printf("혈액형을 입력해 주세요");
	scanf(" %c", &blood);

	printf("나이는  %d 이고 몸무게는 %.2lf 혈액형은 %c 입니다.", age, weight, blood);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int age;
	double weight;
	char blood;

	printf("혈액형을 입력해 주세요.");
	scanf("%c", &blood);
	printf("나이를 입력해 주세요.");
	scanf("%d", &age);
	printf("몸무게를 입력해 주세요.");
	scanf("%lf", &weight);
	printf("당신의 나이는 %d 이고 몸무게는 %.2lf 혈액형은 %c 입니다.", age, weight, blood);
	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int a = 1, b = 2;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d \n%d", a, b);
	return 0;
}*/

#include <stdio.h>

int main()
{
	int s = 10, c = 20, sum = s + c;

	float avg = sum / 2;
	printf("첫번째 수는 %d 이고 두번째 수는 %d 일때", s, c);
	printf("\n두수의 합은 %d \n두수의 평균은 %.1lf 입니다.", sum, avg);
	return 0;
}