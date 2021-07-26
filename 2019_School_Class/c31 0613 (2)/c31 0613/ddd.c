#include <stdio.h>

/*int main()
{
	char arr[] = "good morning";
	printf("%s", arr);
}*/

/*int main()
{
	char *p = "soft meister";
	printf("%s", p); // 여기서 p 는 arr 와 같은 의미이다.
}*/

/*int main()
{
	int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 11,12,13,14 };
	int ary3[4] = { 21,22,23,24 };
	int *ptr_ary[3] = { ary1, ary2, ary3 };
	printf("%d", ptr_ary[1][0]); //포인터 배열도 2차원 배열이 가능하다 부분주소도  
	                             //출력가능 포인터 사용시 메모리 용량을 절약할 수 있다.
}*/

struct student//student라는 자료형을 선언함  구조체에서 struct 사용, 새로운 자료형을 만듬
{
	int age; 
	char name[10]; 
	double height;
};

int main()
{
	struct student person1 = { 18, "경도" , 178 }; // person 변수를 만듦;
	struct student person2;
	person2.age = 20;
	strcpy(person2.name, "경도");
	// person2.name = "경도"; <== 이렇게 하면 아니된다.
	person2.height = 190;

	printf("%d %s %.0lf\n", person1.age, person1.name, person1.height);
	printf("%d %s %.0f", person2.age, person2.name, person2.height);
}
