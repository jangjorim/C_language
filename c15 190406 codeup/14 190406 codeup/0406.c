#include <stdio.h> 
/*int main()//3,6,9 ����
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

	for (i = 1;; i++) // ��� ���ǽ��� �Ⱦ��� ���� �ݺ��ȴ�.
	{
		sum = sum + i;
		if (sum > num)
			break;     //���ѹݺ��Ǵ� �Ŀ� if break �� ����ϸ� ���ǿ� �°� �������´�
	}
	printf("%d", sum); 
}*/

int main() //3�� ����� ����� ���� �ʰ� ���
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