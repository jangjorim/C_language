#include <stdio.h>	

int main()
{
	int a = 100;
	int *p; // *p�� �ش��ּҿ� ����ִ� ���� ã�ƿ´�. *�� �ҷ����°� p�� ������ �̸�

	p = &a; // p��  �ּҸ� ������ �־�� �Ѵ�.

	printf("a �� %d \n", a);
	printf("a�� �ּ� %d \n", &a);
	printf("p�� �� %d \n", p);
	printf("*p�� �� %d", *p);

}