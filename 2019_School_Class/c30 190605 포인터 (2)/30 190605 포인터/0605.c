#include <stdio.h>

/*int main()
{
	
	int a = 100; 
	int *p; // �����͸� ������ �� *�� ����.

	p = &a;
	
	printf("a�� �� : %d \n", a);
	printf("a�� �ּ� : %d \n", &a);
	printf("p�� �� : %d \n", p);
	printf("*p�� �� : %d", *p);
}*/

/*int main()
{
	int arr[3] = { 10, 20, 30 };

	printf("%d \n", *arr);//*�� �ּҿ� ���� ���� ã�ƿ´�.  �� arr [i] == *(arr + i)
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
	int *p = a; // �Ϻη� ������ ��ȯ�� ����
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