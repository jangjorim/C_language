#include <stdio.h>
struct money
{
	int number;
	int won;
};

struct money max(struct money *a, int b)
{
	struct money big = {0, 0};
	
	for (int i = 0; i < b; i++)
	{
		if (big.won < a[i].won)
		{
			big.won = a[i].won;
			big.number = a[i].number;
		}
	}
	return big;
}

int main()
{
	struct money save[5], first;
	for (int i = 0; i < 5; i++)
	{
		printf("%d��° �ݾ�", i + 1);
		save[i].number = i + 1;
		scanf("%d", &save[i].won);
	}
	first = max(save, 5);
	printf("�ݾ��� ���� ū ����� %d��, %d��", first.number, first.won);

}