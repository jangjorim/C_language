#include <stdio.h>

int main()
{
	int i = 1;
	unsigned char num1 = 128;     //  3: 0000 0011
	unsigned char num2 = 254;    // 24: 0001 1000
	num1 >>=1;
	num2 <<=2;
	printf("%u\n", num1);  // 24: 0001 1000: num1�� ��Ʈ ���� �������� 3�� �̵�
	printf("%u\n", num2);  //  6: 0000 0110: num2�� ��Ʈ ���� ���������� 2�� �̵�

	return 0;
}