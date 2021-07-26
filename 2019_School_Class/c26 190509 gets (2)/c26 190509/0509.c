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
	arr[6] = '\0'; // 문자가 끝이라는 말인 NULL 이나 '\0'을 넣어야 한다.
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
	scanf("%s", arr); //배열 에서는 함수 이름 앞에 &를 적지 않는다. 배열명이 배열의 시작주소 를 뜻하기 때문이다.
	printf("%s", arr);
}*/
/*int main() //띄어쓰기 하면 출력이 잘려서 나옴
{
	char name[50];
	int age;
	char address[100];
	printf("이름을 입력해 주세요.\n");
	scanf("%s", name);
	printf("나이를 입력하세요\n");
	scanf("%d", &age);
	printf("주소를 입력 해 주세요\n");
	scanf("%s", address);
	printf("내 이름은 %s 이고 내 나이는 %d  주소는 %s 입니다.", name, age, address);
}*/

/*int main() //띄어쓰기 하면 출력이 잘려서 나옴
{
	char address[100];
	gets(address);  // get_s (address,99) 99이상 공간을 찾이 하지 않는다.
	
	printf("주소는 %s 입니다.", address);
}*/

int main() //띄어쓰기 하면 출력이 잘려서 나옴
{
	char name[50];
	int age;
	char address[100];
	printf("이름을 입력해 주세요.\n");
	scanf("%s", name);
	printf("나이를 입력하세요\n");
	scanf("%d", &age);
	getchar();
	printf("주소를 입력 해 주세요\n");
	gets_s(address, 99);
	printf("내 이름은 %s 이고 내 나이는 %d  주소는 %s 입니다.", name, age, address);
}

