#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, *jumsu, sum = 0;
	printf("��ü �л����� �Է� �ϼ���.");
	scanf("%d", &n);

	jumsu = (int*)malloc(sizeof(int) * n); //malloc �Լ��� ������ �ȵ�
	if (jumsu == NULL)
	{
		printf("�����޸� �Ҵ�ȵ�");
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		printf("������ �Է��ϼ���.");
		scanf("%d", &jumsu[i]); // (jumsu + i)
		sum += jumsu[i]; // *(jumsu + i)
	}
	printf("��� >> %.2f",(double) sum / n); //����ȯ�� ���־�� �Ѵ�.
	free(jumsu);
	return 0;
}