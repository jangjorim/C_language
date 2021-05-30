#include <stdio.h>
/*int main()
{
	int arr[10] = { 0 };
	int num= 13;
	int i;
	int count = 0;

	for (;;)
	{
		if (num == 0)
			break;
		arr[count] = num % 2;
		num = num / 2;
		count = count + 1;

	}

	for (i = count - 1; i >= 0; i--)
	{
		printf("%2d", arr[i]);
	}

}*/

/*int main()// 버블정렬
{
	int arr[5] = { 13,1,5,4,2 };
	int i, j;
	int temp;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4 - i; j++) //j < 4 - i 를 해야 필요 없는 비교를 하지 않는다.
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%3d", arr[i]);
	}
}*/

/*int main() //선택정렬
{
	int arr[5] = { 13,1,5,4,2 };
	int i, j;
	int temp;

	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j <= 4; j++)
		{
			if (arr[i] > arr[j]) // 앞 수가크면 뒤 수와 바꿔준다 
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%3d", arr[i]);
	}
}	*/