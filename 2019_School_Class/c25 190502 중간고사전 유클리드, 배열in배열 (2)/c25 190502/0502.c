#include <stdio.h>
/*int main()
{
	int i, j;
	int arr[10] = { 1, 2, 3 };

	for (j = 0; j < 10; j++)
	{
		printf("%2d", arr[j]);
	}
}*/

/*int main()
{
	char alpha[10] = { 'b','c','e','a','q','z','o','p','l','h' };
	int num[10] = { 4,2,3,7,9,8,0,1,5,6 };

	printf("%c", alpha[num[2]]); //alpha[num[2]]
	printf("%c", alpha[num[3]]);
	printf("%c", alpha[num[3]]);
	printf("%c", alpha[num[5]]);
	printf("%c", alpha[num[1]]);
}*/

/*int main()
{
	int n;
	int sum = 0;
	
	scanf("%d", &n);
	while (n != 0)
	{
		sum = sum + n % 10;
		n = n / 10;
	}
	printf("%d", sum);
}*/

/*int main()
{
	int gcm = 0, lcm = 0;
	int n1, n2;
	int i = 0, temp = 0;
	scanf("%d %d", &n1, &n2);
	/*do
	{
		i = i + 1;
		if (n1 % i == 0 && n2 % i == 0)
		{
			gcm = i;
		}
		j = j + 1;
		if (n1  j == 0 && n2 / j == 0)
		{
			if (lcm == 0)
			{
				lcm = j;
			}
		}
	} while (gcm > 0 && lcm > 0);
	printf("�ִ� ������� %d �ּҰ������ %d �Դϴ�.", gcm, lcm); //����� * / �ϱ�

	i = n1 * n2;
	while (n1 % n2 != 0)
	{
		temp = n1 % n2;
		n1 = n2;
		n2 = temp;
	}
	gcm = n2;
	lcm = i / gcm;
	printf("gcm >>%d\n", gcm);
	printf("lcm >>%d\n", lcm);
}*/

// ++a ���� ������ ���� 1�� ���ϰ� ���
// b-- ���� ������ ���� ����ϰ� 1�� ���ش�

/*int main() //¦���� ��� 
{
	int arr[3] = { 0 };
	int i, j = 0;
	int n = 0;

	while (1)
	{
		for (i = 0; i < 3; i++)
		{
			scanf("%d", &n);
			arr[i] = n;
		}
		for (i = 0; i < 3; i++)
		{
			if (arr[i] % 2 == 0)
			{
				printf("%d\n", arr[i]);
			}
		}
		j = j + 1;
		if (j == 1);
		{
			break; 
		}
	}
	return 0;
}*/

int main()
{
	int a, b, c;
	int i, j;

	scanf("%d %d %d", &a, &b, &c);
    
	if (a / b == 1 && b / c == 1 && c / a == 1)
	{
		printf("���ﰢ��");
	}
	else if (a == b || a == c)
	{
		printf("�̵�ﰢ��");
	}
	else if (a < c && b < c)
	{
		if (a * a + b * b == c * c)
		{
			printf("�����ﰢ��");
		}
	}
	else if (a + b > c && b + c > a && c + a > b)
	{
		printf("�ﰢ��");
	}

	if (a + b < c || b + c < a || c + a < b)
	{
		printf("�ﰢ���ƴ�");
	}
}
