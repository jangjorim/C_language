#include <stdio.h>

/*struct name 
{
	char a[20];
};

int equal(struct name s1, struct name s2);

int main()
{
	struct name s1; //name �� ����ü �ڷ��� �̸� s1 �� ���� �̸� (����)
	struct name s2;
	strcpy(s1.a, "gsm");
	strcpy(s2.a, "gsm");
	
	if (equal(s1, s2) == 1)
		printf("���ڿ��� �����ϴ�.");
	else
		printf("���ڿ��� �ٸ��ϴ�.");

}

int equal(struct name s1, struct name s2)
{
	if (strcmp(s1.a, s2.a) == 0) 
		return 1;
	else
		return 0;
}*/


/*struct studen student_input() //struct studen �� ��ȯ �ڷ��� 
{
	struct student s; //�Ű����� ����ü���� ����

}*/

/*    (*ptr). x == prt -> x �̴�*/

struct sungjuk
{
	int hakbun;
	char name[10];
	double jumsu;
};

int main()
{
	struct sungjuk p1 = { 1402, "jihye", 95.3 };
	struct sungjuk *ptr;

	ptr = &p1;

	printf("�й� >> %d , �̸� >> %s, ���� >> %.1f \n", p1.hakbun, p1.name, p1.jumsu);
	printf("�й� >> %d , �̸� >> %s, ���� >> %.1f\n", (*ptr).hakbun, (*ptr).name, (*ptr).jumsu);
	printf("�й� >> %d , �̸� >> %s, ���� >> %.1f \n",ptr -> hakbun , ptr -> name, ptr -> jumsu); //��� ���̰���. �ڵ尡 ����.
}