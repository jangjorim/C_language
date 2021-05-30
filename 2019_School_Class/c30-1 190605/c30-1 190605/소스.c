#include <stdio.h>	

int main()
{
	int a = 100;
	int *p; // *p는 해당주소에 들어있는 값을 찾아온다. *이 불러오는것 p는 포인터 이름

	p = &a; // p는  주소를 가지고 있어야 한다.

	printf("a 값 %d \n", a);
	printf("a의 주소 %d \n", &a);
	printf("p의 값 %d \n", p);
	printf("*p의 값 %d", *p);

}