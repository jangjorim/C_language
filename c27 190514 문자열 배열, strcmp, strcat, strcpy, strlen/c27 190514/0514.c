#include <stdio.h>
/*int main()
{
	int i;

	char arr[5][20];

	for (i = 0; i < 5; i++)
	{
		scanf("%s", arr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", arr[i]);
	}
}*/

#include <string.h> //���ڿ� �Լ��� ����ִ� �׷��� ���� ������ ���ص� ���������� �׷��� �����ؾ���
/*int main()
{
	char arr[20] = "hello";
	printf("%d", strlen(arr)); //strlen �� nall�̳� ������ �����ϰ� �Է� �������� ���̸� ���
}*/

/*int main()
{
	int length, i;
	char arr[50];

	printf("���ڿ��� �Է��ϼ��� >>");
	gets_s(arr, 49); //���� ���ڸ� nall �� ���� 49�� �ִ�� ���� �� �ִ� �����̴�.
	printf("�Է¹��� ���ڿ� ���� : %d\n", strlen(arr));
	for (i = strlen(arr) - 1; i >= 0; i--)
	{
		printf("%c", arr[i]);
	}
}*/

/*int main()
{
	char arr1[20];
	char arr2[20] = "hello";
	strcpy(arr1, arr2); //strcpy �� ���� ���ڿ��� �տ� ���ڿ��� �������ش�. �Լ� �̸� ����
	printf("%s", arr1);
}*/

/*int main()
{
	char arr1[20];
	char arr2[20];

	gets_s(arr2, 19);// �Է�
	strcpy(arr1, arr2);// ����
	printf("%s", arr1);//���
}*/

/*int main()
{
	char arr1[20] = "hello";
	char arr2[20] = "world";
	strcat(arr1, arr2); //strcat �� �� ���ڿ� �ڿ� �� ���ڿ��� �����ؼ� �̾ �Է��Ѵ�.
	printf("%s", arr1);
}*/
/*int main()
{
	char arr1[20];
	char arr2[20];
	char arr3[40];

	gets_s(arr1, 19);
	gets_s(arr2, 19);
	strcpy(arr3, arr1);
	strcat(arr3, arr2); // �ڿ� �̾� �ش�.
	printf("%s", arr3);
}*/

int main()
{
	char arr1[10];
	char arr2[10];

	gets_s(arr1, 9);
	gets_s(arr2, 9);
	
	if (strcmp(arr1, arr2) == 0) //strcmp �� �������� ������ ũ�⸦ ���Ѵ�
		                         // cat, dog �̸� c�� ���������� �� �տ� �����Ƿ� c���� �� �۴�
		                         // 
	{
		printf("��ġ");
	}
	else
		printf("����ġ");
}
