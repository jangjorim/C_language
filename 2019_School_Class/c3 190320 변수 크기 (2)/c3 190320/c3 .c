#include <stdio.h>

//1
/*
int main()
{
	int age = 18;

	double weight = 78.5;

	char blood = 'A';

	printf("나의 나이는 %d살이고 몸무게는 %.1fkg 혈액형은 %c입니다", age, weight, blood);

	return  0;
}*/
//2
int main()
{
	printf("char의  크기 : %dbyte\n", sizeof(char));
	printf("short의  크기 : %dbyte\n", sizeof(short));
	printf("int의  크기 : %dbyte\n", sizeof(int));
    printf("long의  크기 : %dbyte\n", sizeof(long));
	printf("double의  크기 : %dbyte\n", sizeof(double));
	printf("float의  크기 : %dbyte\n", sizeof(float));

	return 0;
}
//3
/*int main()
{
	int a = 1, b = 2;
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("%d, %d", a, b);
	return 0;
}*/
//4
/*int main()
{
	int a = 1, b = 2;
	a = a + b; //a는 3이 된다
	b = a - b; //b는 1이 된다
	a = a - b; //a는 2가 된다
	printf("%d, %d", a, b);
	return 0;
}*/
//5
/*int main()
{
	int age;
    float weight;
	char blood;
	printf("몸무게를 입력해 주세요>>");
	scanf("%f", &weight);
	printf("나이를 입력해 주세요>>");
	scanf("%d", &age);
	printf("혈액형을 입력해 주세요>>");
	scanf(" %c", &blood); //c는 문자형이고 스페이스도 공백 문자로 인식하기 때문에 바로 다음으로 넘어간다. 
	// 그런현상을 방지 하기 위해서는 %c 앞에 띄어쓰기를 해야한다.
	printf("나이는 %d 이고 몸무게는 %f 혈액형은 %c 형입니다.", age, weight, blood);
	return 0;
}*/














//p71 연습문제
/*int main()
{
	int a = 1, b = 2, c = 3;
	int temp;
	temp = a;
	a = c;
	c = b;
	b = temp;
	printf("%d %d %d", a, b, c);
	return 0;
}*/

