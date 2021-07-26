#include <stdio.h>

/*struct name 
{
	char a[20];
};

int equal(struct name s1, struct name s2);

int main()
{
	struct name s1; //name 은 구조체 자료형 이름 s1 은 변수 이름 (선언)
	struct name s2;
	strcpy(s1.a, "gsm");
	strcpy(s2.a, "gsm");
	
	if (equal(s1, s2) == 1)
		printf("문자열이 같습니다.");
	else
		printf("문자열이 다릅니다.");

}

int equal(struct name s1, struct name s2)
{
	if (strcmp(s1.a, s2.a) == 0) 
		return 1;
	else
		return 0;
}*/


/*struct studen student_input() //struct studen 은 반환 자료형 
{
	struct student s; //매개변수 구조체변수 선언

}*/

/*    (*ptr). x == prt -> x 이다*/

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

	printf("학번 >> %d , 이름 >> %s, 점수 >> %.1f \n", p1.hakbun, p1.name, p1.jumsu);
	printf("학번 >> %d , 이름 >> %s, 점수 >> %.1f\n", (*ptr).hakbun, (*ptr).name, (*ptr).jumsu);
	printf("학번 >> %d , 이름 >> %s, 점수 >> %.1f \n",ptr -> hakbun , ptr -> name, ptr -> jumsu); //모두 값이같다. 코드가 같다.
}