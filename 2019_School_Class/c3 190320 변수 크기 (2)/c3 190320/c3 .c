#include <stdio.h>

//1
/*
int main()
{
	int age = 18;

	double weight = 78.5;

	char blood = 'A';

	printf("���� ���̴� %d���̰� �����Դ� %.1fkg �������� %c�Դϴ�", age, weight, blood);

	return  0;
}*/
//2
int main()
{
	printf("char��  ũ�� : %dbyte\n", sizeof(char));
	printf("short��  ũ�� : %dbyte\n", sizeof(short));
	printf("int��  ũ�� : %dbyte\n", sizeof(int));
    printf("long��  ũ�� : %dbyte\n", sizeof(long));
	printf("double��  ũ�� : %dbyte\n", sizeof(double));
	printf("float��  ũ�� : %dbyte\n", sizeof(float));

	return 0;
}
//3
/*int main()
{
	int a = 1, b = 2;
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("%d, %d", a, b);
	return 0;
}*/
//4
/*int main()
{
	int a = 1, b = 2;
	a = a + b; //a�� 3�� �ȴ�
	b = a - b; //b�� 1�� �ȴ�
	a = a - b; //a�� 2�� �ȴ�
	printf("%d, %d", a, b);
	return 0;
}*/
//5
/*int main()
{
	int age;
    float weight;
	char blood;
	printf("�����Ը� �Է��� �ּ���>>");
	scanf("%f", &weight);
	printf("���̸� �Է��� �ּ���>>");
	scanf("%d", &age);
	printf("�������� �Է��� �ּ���>>");
	scanf(" %c", &blood); //c�� �������̰� �����̽��� ���� ���ڷ� �ν��ϱ� ������ �ٷ� �������� �Ѿ��. 
	// �׷������� ���� �ϱ� ���ؼ��� %c �տ� ���⸦ �ؾ��Ѵ�.
	printf("���̴� %d �̰� �����Դ� %f �������� %c ���Դϴ�.", age, weight, blood);
	return 0;
}*/














//p71 ��������
/*int main()
{
	int a = 1, b = 2, c = 3;
	int temp;
	temp = a;
	a = c;
	c = b;
	b = temp;
	printf("%d %d %d", a, b, c);
	return 0;
}*/

