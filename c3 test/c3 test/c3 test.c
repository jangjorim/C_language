/*#include <stdio.h>
int main()
{
	int age;
	double weight;
	char blood;

	printf("�����Ը� �Է� �� �ּ���");

	scanf("%lf", &weight);

	printf("���̸� �Է��� �ּ���");
	scanf("%d", &age);

	printf("�������� �Է��� �ּ���");
	scanf(" %c", &blood);

	printf("���̴�  %d �̰� �����Դ� %.2lf �������� %c �Դϴ�.", age, weight, blood);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int age;
	double weight;
	char blood;

	printf("�������� �Է��� �ּ���.");
	scanf("%c", &blood);
	printf("���̸� �Է��� �ּ���.");
	scanf("%d", &age);
	printf("�����Ը� �Է��� �ּ���.");
	scanf("%lf", &weight);
	printf("����� ���̴� %d �̰� �����Դ� %.2lf �������� %c �Դϴ�.", age, weight, blood);
	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int a = 1, b = 2;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d \n%d", a, b);
	return 0;
}*/

#include <stdio.h>

int main()
{
	int s = 10, c = 20, sum = s + c;

	float avg = sum / 2;
	printf("ù��° ���� %d �̰� �ι�° ���� %d �϶�", s, c);
	printf("\n�μ��� ���� %d \n�μ��� ����� %.1lf �Դϴ�.", sum, avg);
	return 0;
}