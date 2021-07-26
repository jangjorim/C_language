#include <stdio.h>
/*int main()
{
	int i = 1;

	while (i < 10)
	{
		printf("4 * %d = %d\n", i, i*4);
		i = i + 1;
	}

}*/

/*int main()
{
	int dan;
	int i = 1;
	printf("단을 입력하세요");
	scanf("%d", &dan);
	while (i < 10) //(i <= dan)을 하면 16입력시 16*16까지 출력한다
	{
		printf("%d * %d = %d\n",dan, i, dan * i);
		i++;
	}
}*/


/*int main()

{
	int count;
	printf("숫자를 입력하세요.");
	scanf("%d", &count);

	while (count > 0)
	{
		printf("%d\n", count);
		count--;

	}
	printf("카운트 종료");
}*/



/*int main()
{
	int number;
	int sum = 0;

	number = 1;
	while (number<101)
	{
		if (number % 7 ==0)
		{
			sum = sum + number; //sum +=number 가능
			printf("%d\n", sum);
		}
		number++;
	}
	printf("1부터 100사이의 모든 7의 배수의 합은 %d 입니다.\n", sum);
}*/


/*int main()
{
	int number = 1;

	while (number < 101)
	{
		if (number % 3 == 0 && number % 5 == 0) // number % 3 이렇게 적을면 오류남 == 0 이라는 값을 만족시키지 못하기 때문
		{
			printf("%d\n", number);
		}
		number++;
	}
}*/

/*int main()
{
	int i;
	do
	{
		printf("매뉴를 선택하세요 \n");
		printf("1 김밥 \n");
		printf("2 오뎅 \n");
		printf("3 김말이 \n");
		scanf("%d", &i);

	} while (i < 1 || i > 3);

	printf("선택된 메뉴는 %d", i);
	return 0;
}*/

/*int main()
{
	int value, total = 0, i = 1;
	do
	{
		printf("숫자를 입력하세요");
		scanf("%d", &value);
		i++;                   // i++과 total = total + value 의 순서를 바꿔도 상관 없다.
		total = total + value; //
	} while (i < 6);

	printf("입력한 숫자의 총 합계 %d", total);
}*/

/*int main()
{
	int sum = 0, num = 0;
	do
	{
		printf("정수를 경도하세요(0은 멈춤, 경도는 입력)");
		scanf("%d", &num);
		sum += num;

	} while (num != 0); // not 일때 참이되게 할때는 !=
	printf("입력한 숫자의 총 합계 %d", sum);

}*/

	
/*int main()
{
	int num;
	int sum2 = 0; //짝수의 개수
	int sum1 = 0; //홀수의 개수 
	do
	{
		printf("정수를 입력해 주세요 0을 입력하면 종료 됩니다.");
		scanf("%d", &num);
		if (num % 2 == 0)
			sum2++;
		else
			sum1++;

	} while (num != 0);
	printf("홀수의 개수는 %d 이고 짝수의 개수는 %d 입니다.", sum1, sum2 - 1);
}*/
