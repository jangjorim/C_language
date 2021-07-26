#include <stdio.h> 
/*int main()//3,6,9 게임
{
	int i;
	int num;
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		if (i % 3 == 0)
		    printf("X ");
		else
			printf("%d ", i);
	}
}*/

/*int main()
{
	int i;
	int num;
	int sum = 0;

	scanf("%d", &num);

	for (i = 1;; i++) // 가운데 조건식을 안쓰면 무한 반복된다.
	{
		sum = sum + i;
		if (sum > num)
			break;     //무한반복되는 식에 if break 를 사용하면 조건에 맞게 빠져나온다
	}
	printf("%d", sum); 
}*/

int main() //3의 배수만 출력이 되지 않게 출력
{
	int i;
	int num;
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		if (i % 3 != 0)
			printf("%d ", i);
	}
}