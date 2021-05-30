#include <stdio.h>
int main()
{
	int  arr[4][4] = 
	{{1,2,3,4},
	 {5,6,7,8},
	 {9,10,11,12},
	 {13,14,15,16}
	};
	int i, j;

	for (i = 0; i < 4; i++)
	{
		if (i % 2 == 1)
		{
			for (j = 3; j >= 0; j--)
			{
				printf(" %d", arr[i][j]);
			}
		}
		else
		{
			for (j = 0; j < 4; j++)
			{
				printf(" %d", arr[i][j]);
			}
		}
		printf("\n");
	}
}