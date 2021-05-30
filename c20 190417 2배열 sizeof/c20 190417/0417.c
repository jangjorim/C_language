#include <stdio.h>
/*int main()
{
	int num, i;
	int seats[10] = { 0 };
	int count = 10;

	while (1)
	{
		printf("*********************************\n");
		printf("  1  2  3  4  5  6  7  8  9  10\n");
		printf("*********************************\n");
		
		for (i = 0; i < 10; i++)
		{
			printf("%3d", seats[i]);
		}
		printf("\n\n");
		printf("%d개의 자리가 남았습니다.\n", count);

		scanf("%d", &num);

		if (num == -1)
			break;
		if (num <= 0 || num > 10)
		{
			printf("\n1과 10사이의 수를 입력해주세요\n");
			continue;
		}
		

		if (seats[num - 1] == 0)
		{
			seats[num - 1] = seats[num - 1] + 1;
			printf("\n예약 완료\n");
			count = count - 1;
		}
		else
			printf("예약된 자리 입니다.\n");
		if (count == 0)
		{
			printf("\n예약이 다 찼습니다. 다음에 찾아와 주세요.\n\n");
			return 0;
		}
	}
}*/


int main()
{
	int arr1[5] = { 10,20,30,40,50 };
	short arr2[] = { 100,200,300 };
	int arr3[7] = { 1,2,3 };

	printf("arr1 의 크기 >> %dbyte\n", sizeof(arr1));
	printf("arr2 의 크기 >> %dbyte\n", sizeof(arr2));
	printf("arr3 의 크기 >> %dbyte\n", sizeof(arr3));

	printf("arr1 의 길이 >> %d\n", sizeof(arr1)/ sizeof(arr1[0]));
	printf("arr2 의 길이 >> %d\n", sizeof(arr2) / sizeof(arr2[0]));
	printf("arr3 의 길이 >> %d\n", sizeof(arr3) / sizeof(arr3[0]));
}

/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,9,9,9,9 };
	int i, size;
	size = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i <size; i++)
	{
		printf("%d ", arr[i]);
	}
}*/

/*#define COL 3
#define ROW 6
int main()
{
	int arr[COL][ROW] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i, j;

	for (i = 0; i < COL; i++)
	{
		for (j = 0; j < ROW; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
}*/