#include <stdio.h>

/* char main()
{
	FILE *filee = NULL;
	filee = fopen("C:\\Users\\user\\Desktop\\filee.txt", "r+");

	char a[30];

	while (fscanf(filee, "%s", a) != EOF)
	{
		printf("%s", a);
	}
	fprintf(filee,"GSM");
	fclose(filee);
}*/

/*int main()
{
	FILE *filee;
	filee = fopen("filee.txt", "w");

	fprintf(filee, "hello word");
	fclose(filee);
	
}*/

struct member
{
	char name[10];
	int age;
	char gender[3];
	char city[10];
	
};

int main()
{
	struct member m;
	FILE *f;
	f = fopen("C:\\Users\\user\\Desktop\\filee.txt", "r+");
	fscanf(f, "%s %d %s %s", m.name, &m.age, m.gender, m.city);
	printf("%s %d %s %s", m.name, m.age, m.gender, m.city);
	fclose(f);
}