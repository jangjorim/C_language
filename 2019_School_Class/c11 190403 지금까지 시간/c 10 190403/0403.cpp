#include <stdio.h>
										#include <stdlib.h>
										#include <time.h>
/*int main()
{
	int answer = 59;
	int guess;
	int tries = 0;

	do
	{
		printf("������ �Է��ϼ���");
		scanf("%d", &guess);
		if (guess < answer) // 59��� ���ں��� answer�� ���� ���� ���� ���ڸ� �ٲٱ� �����ϱ� ����
			printf("up");
		if (guess > answer)
			printf("down");
	
		tries++;
	} while (guess != answer);
		printf("perfect");
		printf("�õ� Ƚ�� %d", tries); //tries - 1�� �ؾ� ��°����� 1�� ���� tries-- �� �ȵ�
}*/

int main()
{
	srand(time(NULL)); //1970�� ���� ���ݱ����� �ð��� �� �� ���
	int a;
	a = rand() % 100 + 1; //rand 0 ~n ������ ������ �߻� %10�� �ϸ� 0~9������ �� �߻� %100�ϸ� 0~99������ �� �߻�
	printf("%d\n", a);
}

/*int main()
{
	srand(time(NULL));
	int answer = rand()%100 + 1; //srand(time(NULL));�� rand �Լ��� ���� �ʷ� ����ϸ� ���� Ŀ�� + 1�� �ϸ� 1~10
	int guess;
	int tries = 0;

	do
	{
		printf("������ �Է��ϼ���");
		scanf("%d", &guess);
		if (guess < answer) // 59��� ���ں��� answer�� ���� ���� ���� ���ڸ� �ٲٱ� �����ϱ� ����
			printf("up\n");
		if (guess > answer)
			printf("down\n");

		tries++;
	} while (guess != answer);
		printf("perfect");
		printf("�õ� Ƚ�� %d", tries); //tries - 1�� �ؾ� ��°����� 1�� ���� tries-- �� �ȵ�
}*/

/*int main()
{
	int sum = 0;
	for (int i = 1; i < 11; i++) // for()�ȿ� �Լ������� �ϸ� for �ȿ����� �� �� �ִ�.
		
	{
		sum = sum + i;
	}
	printf("%d\n", sum);
}*/

/*int main() // 1+ 2+ 3+ 4....+n ������ ��
{
	int i;
	int sum = 0;
	int s; //�ԷµǴ� ���� = 0 ó�� ������ ���� �ʾƵ� �ȴ�.
	scanf("%d", &s);
	for (i = 1; i <= s; i++)
	{
		sum = sum + i;
		
	}
	printf("%d", sum);
}*/

/*int main()
{
	int i;
	int s;
	int sum = 0;
	scanf("%d", &s); //& �������� ����
	for (i = 1; i <= s; i++)
	{
		sum = sum + i * i;
		//printf("%d\n", sum); ���ڰ� Ŀ���� ���� ������� �� �� �ִ�
	}
	printf("%d", sum);
}*/

/*int main()
{
	int i;
	int s;
	scanf("%d", &s);
	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", s, i, i*s);
	}
}*/

/*int main()
{
	int s;
	int i;
	printf("���� ���� �Է�");
	scanf("%d", &s);

	for (i = 1; i <= s; i++)
	{
		if (s % i == 0)
		{
			printf("%d  ", i);
		}
	}

}*/