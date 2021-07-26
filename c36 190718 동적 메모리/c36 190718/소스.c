#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, *jumsu, sum = 0;
	printf("전체 학생수를 입력 하세요.");
	scanf("%d", &n);

	jumsu = (int*)malloc(sizeof(int) * n); //malloc 함수를 잊으면 안됨
	if (jumsu == NULL)
	{
		printf("동적메모리 할당안됨");
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		printf("점수를 입력하세요.");
		scanf("%d", &jumsu[i]); // (jumsu + i)
		sum += jumsu[i]; // *(jumsu + i)
	}
	printf("평균 >> %.2f",(double) sum / n); //형변환을 해주어야 한다.
	free(jumsu);
	return 0;
}