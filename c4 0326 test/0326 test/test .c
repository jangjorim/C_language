#include <stdio.h>

 /*char main()
{
	char a;
	
	scanf("%c", &a);
	printf("%c", a);
}*/

/*#include <stdio.h>
int main()
{
	int num;
	printf("���ڸ� �Է��ϼ���.");
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		printf("¦���Դϴ�.");
	}
	else
	{
		printf("Ȧ�� �Դϴ�.");
	}
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int num;
	printf("���ڸ� �Է��ϼ���.");
	scanf("%d", &num);
	num % 2 == 0 ? printf("¦�� �Դϴ�.") : printf("Ȧ�� �Դϴ�.");

}*/

/*#include <stdio.h>
int main()
{
	int x, y, max;
	printf("�ΰ��� ������ �Է�");
	scanf("%d %d", &x, &y);

	if (x > y)
	{
		max = x;
		printf("%d", max);

	}
	else
	{
		printf("%d", y);

	}
}*/
int main()
{
	int i, j;
	int arr[5] = { 0 };
	int n;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &n);
		arr[i] = n;
		//n % 2 == 0 ? printf("¦�� �Դϴ�.\n") : printf("Ȧ�� �Դϴ�.\n");
		if (n % 2 == 0)
		{
			printf("¦�� �Դϴ�.\n");
		}
		else
		{
			printf("Ȧ�� �Դϴ�.\n");
		}	
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
}





