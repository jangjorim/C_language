#include<stdio.h>

struct student {
	int age;
	char name[10];
	double height;
};

int main()
{
	struct student person_list[3];
	for (int i = 0; i < 3; i++)
	{
		printf("���� >>");
		scanf("%d", &person_list[i].age);
		printf("�̸� >>");
		scanf("%s", person_list[i].name);
		printf("Ű >>");
		scanf("%lf", &person_list[i].height);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("���� %d �̸� %s Ű %.1lf ", person_list[i].age, person_list[i].name, person_list[i].height);
	}
}