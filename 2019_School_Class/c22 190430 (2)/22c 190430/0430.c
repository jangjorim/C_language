#include <stdio.h>
/*int main()
{
	int arr[3][4] = { 0 };//{ {3}, {2}, {1} }; 이렇게 해서 입력 출력 
	int i, j;
	int n = 0;

	for (i = 0; i < 4; i++) //열 
	{
		for (j = 2; j >= 0; j--) //행
		{
			n = n + 1;
			arr[j][i] = n;
		}
		//n = 0;
	}


	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}

}*/

/*int main()
{
	int arr[100][100] = { 0 };
	int i, j;
	int n;
	int s = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j >= 0; j--)
		{
			s = s + 1;
			arr[i][j] = s;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%2d", arr[i][j]);
		}
		printf("\n");
	}

}*/
/*int main()
{
	int a[5] = { 65,75,45,85,95 };
	int b[5] = { 0 };
	int i, j;

	for (i = 0; i < 5; i++)
	{
		b[i] = 1;
		for (j = 0; j < 5; j++)
		{ 
		 
		 if (a[i] < a[j])
		 {
			b[i] = b[i] + 1;
		 }
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%2d", b[i]);
	}
}*/

int main()
{
	int arr[100][100] = { 0 };
	int i, j; 
	int n = 0, m = 0; //n 이 행 m이 열
	int s = 0;

	scanf("%d %d", &n, &m);
	for (i = n - 1; i >= 0; i--)
	{
		for (j = 0; j < m; j++)
		{
			s = s + 1;
			arr[i][j] = s;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
}