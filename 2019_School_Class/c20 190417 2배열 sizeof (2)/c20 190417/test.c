#include <stdio.h>
int main()
{
	int i;
	int j[7] = { 0 };
	int max;
	int num;


	for (i = 0; i < 7; i++)
	{
		scanf("%d", &j[i]);
		
		if (i == 0)
			max = j[0];
	}
	for (i = 0; i < 7; i++)
	{
		if (max < j[i])
		{
			max = j[i];
		}
	}
	printf("%d", max);
}