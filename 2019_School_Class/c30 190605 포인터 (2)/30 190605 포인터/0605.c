#include <stdio.h>

/*int main()
{
	
	int a = 100; 
	int *p; // 포인터를 선언할 때 *을 쓴다.

	p = &a;
	
	printf("a의 값 : %d \n", a);
	printf("a의 주소 : %d \n", &a);
	printf("p의 값 : %d \n", p);
	printf("*p의 값 : %d", *p);
}*/

/*int main()
{
	int arr[3] = { 10, 20, 30 };

	printf("%d \n", *arr);//*은 주소에 들어가서 값을 찾아온다.  즉 arr [i] == *(arr + i)
	printf("%d \n", *(arr+1));
	printf("%d \n", *(arr+2));
}*/

/*int main()
{
	int arr[3] = { 10, 20, 30 };
	int *ptr = arr;
	printf("%d\n", *ptr);
	printf("%d\n", *(ptr+1));
	printf("%d\n", *(ptr+2));
}*/

int get_sum(int *a, int b)
{
	int sum = 0;
	int *p = a; // 일부로 선언함 변환에 용이
	for (int i = 0; i < b; i++)
	{
		sum = sum + *(p + i);
	}
	return sum;
}

int main()
{
	int a[] = { 10,20,30 };
	printf("%d\n", get_sum(a, 3));
	return 0;
}