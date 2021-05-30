#include <stdio.h>
int main()
{
	int a[5][5] = { 0 };
	int i, j, k = 1;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			a[5][5] = k++;
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d", a[i][j]);
		printf("\n");
	}
	return 0;
}