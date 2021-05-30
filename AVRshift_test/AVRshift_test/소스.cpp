#include <stdio.h>

int main()
{
	int i = 1;
	unsigned char num1 = 128;     //  3: 0000 0011
	unsigned char num2 = 254;    // 24: 0001 1000
	num1 >>=1;
	num2 <<=2;
	printf("%u\n", num1);  // 24: 0001 1000: num1의 비트 값을 왼쪽으로 3번 이동
	printf("%u\n", num2);  //  6: 0000 0110: num2의 비트 값을 오른쪽으로 2번 이동

	return 0;
}