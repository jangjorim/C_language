#include <stdio.h>
/*int main()
{
	int arr[4][3] = { 1,2,4,5,6,0,7,0,0,8,0,9 };
	int i;
	int j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			printf("arr[%d][%d] = %d ", i, j, arr[i][j]);
		printf("\n");
	}
}*/

/*int main()// 거꾸로 출력 
{
	int arr[4][3] = { 1,2,4,5,6,0,7,0,0,8,0,9 };
	int i;
	int j;

	for (i = 3; i >= 0; i--)
	{
		for (j = 2; j >= 0; j--)
			printf("%d ", arr[i][j]); 
		printf("\n");
	}
}*/

/*int main()//값을 더해서 출력
{
	int arr1[3][3] = { 0,1,4,6,7,8,1,3,7 };
	int arr2[3][3] = { 1,2,3,0,9,4,0,3,1 }; //눈으로 확인하기 쉽게 { {1,2,3}
	                                        //                       {0,9,4}
											//이렇게 해도 된다.      {0,3,1} };
	int arr3[3][3] = { 0 };
	int i;
	int j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
			printf("%3d", arr3[i][j]);
		}
		printf("\n");
	}
}*/

int main()
{
	int i;
	int j;
	int sum = 0;
	int arr[5][5] = { 0 };
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			sum = sum + 1;
			arr[i][j] = sum;
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

}

/*int main()
{
	int arr[5][5] = {
	{10,50,10,50,0},
	{20,60,20,60,0},
	{30,80,40,80,0},
	{40,80,40,80},
	{0}
	};
	int i;
	int j;
	
	for (i = 0; i < 4; i++)//과목별 점수 합계
	{
		for (j = 0; j < 4; j++)
		{
			arr[4][i] += arr[j][i];
		}
	}
	for (i = 0; i < 4; i++)//학생별 점수 합계
	{
		for (j = 0; j < 4; j++)
		{
			arr[i][4] += arr[i][j];
		}
	}
	for (i = 0; i < 4; i++)//모든 학생의 점수 합계
	{
		arr[4][4] += arr[i][4];
	}
	for (i = 0; i < 5; i++)//출력
	{
		for (j = 0; j < 5; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}*/