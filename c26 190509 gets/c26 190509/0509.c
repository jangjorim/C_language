#include <stdio.h>
/*int main()
{
	char arr[10];
	arr[0] = 'b';
	arr[1] = 'a';
	arr[2] = 'n';
	arr[3] = 'a';
	arr[4] = 'n';
	arr[5] = 'a';
	arr[6] = '\0'; // ���ڰ� ���̶�� ���� NULL �̳� '\0'�� �־�� �Ѵ�.
	printf("%s", arr);
}*/

/*int main()
{
	int i = 0;
	
	char arr[10];
	arr[0] = 'H';
	arr[1] = 'e';
	arr[2] = 'l';
	arr[3] = 'l';
	arr[4] = 'o';
	arr[5] = ' ';
	arr[6] = 'g';
	arr[7] = 's';
	arr[8] = 'm';
	arr[9] = '\0';

	while (arr[i] != '\0')
	{
		printf("%c", arr[i]);
		i = i + 1;
	}
}*/

/*int main()
{
	char arr1[] = "I am Groot!";
	char arr2[30];
	int i, size;

	 size = sizeof (arr1) / sizeof (char);
	  
	 for (i = 0; i < size + 1; i++)
	 {
		 arr2[i] = arr1[i];
	 }
	printf("%s", arr2);
}*/
/*int main()
{
	char arr[50];
	scanf("%s", arr); //�迭 ������ �Լ� �̸� �տ� &�� ���� �ʴ´�. �迭���� �迭�� �����ּ� �� ���ϱ� �����̴�.
	printf("%s", arr);
}*/
/*int main() //���� �ϸ� ����� �߷��� ����
{
	char name[50];
	int age;
	char address[100];
	printf("�̸��� �Է��� �ּ���.\n");
	scanf("%s", name);
	printf("���̸� �Է��ϼ���\n");
	scanf("%d", &age);
	printf("�ּҸ� �Է� �� �ּ���\n");
	scanf("%s", address);
	printf("�� �̸��� %s �̰� �� ���̴� %d  �ּҴ� %s �Դϴ�.", name, age, address);
}*/

/*int main() //���� �ϸ� ����� �߷��� ����
{
	char address[100];
	gets(address);  // get_s (address,99) 99�̻� ������ ã�� ���� �ʴ´�.
	
	printf("�ּҴ� %s �Դϴ�.", address);
}*/

int main() //���� �ϸ� ����� �߷��� ����
{
	char name[50];
	int age;
	char address[100];
	printf("�̸��� �Է��� �ּ���.\n");
	scanf("%s", name);
	printf("���̸� �Է��ϼ���\n");
	scanf("%d", &age);
	getchar();
	printf("�ּҸ� �Է� �� �ּ���\n");
	gets_s(address, 99);
	printf("�� �̸��� %s �̰� �� ���̴� %d  �ּҴ� %s �Դϴ�.", name, age, address);
}

