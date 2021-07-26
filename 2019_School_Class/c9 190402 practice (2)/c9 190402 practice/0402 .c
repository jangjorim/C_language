#include <stdio.h>
/*int main()
{
	char grade;
	printf("등급을 입력하세요 A,B,C,D,F\n");
	scanf("%c", &grade);

	switch (grade)
	{
	case 'A':
		printf("축하합니다!!");
		break;
	case 'B':
	case 'C':
		printf("축하해~~");
		break;
	case 'D':
		printf("축하");
		break;
	case 'F':
		printf("축");
		break;

	default :
		printf("잘못된 입력입니다.");
		break;
	}
	printf("%c", grade);
	return 0;
}*/
/*int main()
{
	int i = 1;
	while (i < 10)
	{

		printf("4 * %d = %d\n", i, 4 * i);
		i = i + 1;

	}

}*/

/*int main()
{
	int i = 1;
	int s = 2;
	int sum = 0;//변수 하나로


	while (i < 99)
	{
		
		printf("%d/%d+ ", i ,s);
			i++;
			s++;
	}
	printf("%d/%d", 99, 100);
}*/

/*int main()
{
	int i = 1;

	while (i < 99)
	{
		printf("%d/%d+ ", i, i + 1);
		i = i + 1;
	}
	printf("%d/%d", 99, 100);
}*/

/*int main()
{
	int dan;
	int i = 1;
	printf("단을 입력하세요.>>");
	scanf("%d", &dan);
	while (i <= 9)
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
		i++;
	}
}*/

/*int main()
{
	int count;
	printf("숫자를 입력하세요. >>");
	scanf("%d", &count);

	while (count >= 0)
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
	while (number <= 100)
	{
		if (number % 7 == 0)
		{
			sum = sum + number;
		}
		number++;
	}
	printf("1부터 100사이의 모든 7의 배수의 합은 %d 입니다. \n", sum);
}*/

/*int main()
{
	int number = 100;
	
	while (number >= 1)
	{
		if (number % 3 == 0 && number % 5 == 0) // 이 뒤에 ; 조심하자
		{
			printf("%d\n", number);
		}
		number--;
	}
}*/

/*int main()
{
	int i;
	do
	{
			printf("메뉴를 선택해 주세요 \n");
			printf("1 김밥 \n");
			printf("2 어묵 \n");
			printf("3 고구마 튀김 \n");
			scanf("%d", &i);

	} while (i < 1 || i > 3); // ||는 or 연산자로 하나만 참이되더라도 계속 반복되게된다.
	printf("선택된 메뉴는 %d", i);
}*/

int main()
{
	int value, total = 0, count = 1;
	do
	{
		printf("숫자를 입력하세요.");
		scanf("%d", &value); 
		count++;             
		total = total + value; // total += value 라고해도 무관

	} while (count < 6);
	printf("입력한 숫자의 총 합계는 %d 입니다.", total);

}