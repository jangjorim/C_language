#include <stdio.h>

/*int main()
{
	char arr[] = "good morning";
	printf("%s", arr);
}*/

/*int main()
{
	char *p = "soft meister";
	printf("%s", p); // ���⼭ p �� arr �� ���� �ǹ��̴�.
}*/

/*int main()
{
	int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 11,12,13,14 };
	int ary3[4] = { 21,22,23,24 };
	int *ptr_ary[3] = { ary1, ary2, ary3 };
	printf("%d", ptr_ary[1][0]); //������ �迭�� 2���� �迭�� �����ϴ� �κ��ּҵ�  
	                             //��°��� ������ ���� �޸� �뷮�� ������ �� �ִ�.
}*/

struct student//student��� �ڷ����� ������  ����ü���� struct ���, ���ο� �ڷ����� ����
{
	int age; 
	char name[10]; 
	double height;
};

int main()
{
	struct student person1 = { 18, "�浵" , 178 }; // person ������ ����;
	struct student person2;
	person2.age = 20;
	strcpy(person2.name, "�浵");
	// person2.name = "�浵"; <== �̷��� �ϸ� �ƴϵȴ�.
	person2.height = 190;

	printf("%d %s %.0lf\n", person1.age, person1.name, person1.height);
	printf("%d %s %.0f", person2.age, person2.name, person2.height);
}
