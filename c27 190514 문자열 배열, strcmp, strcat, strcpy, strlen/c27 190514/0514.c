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

#include <string.h> //문자열 함수가 들어있다 그래서 선언 선언을 안해도 가능하지만 그래도 선언해야함
/*int main()
{
	char arr[20] = "hello";
	printf("%d", strlen(arr)); //strlen 는 nall이나 공백을 제외하고 입력 받은것의 길이를 출력
}*/

/*int main()
{
	int length, i;
	char arr[50];

	printf("문자열을 입력하세여 >>");
	gets_s(arr, 49); //제일 끝자리 nall 을 빼고 49가 최대로 넣을 수 있는 공간이다.
	printf("입력받은 문자열 길이 : %d\n", strlen(arr));
	for (i = strlen(arr) - 1; i >= 0; i--)
	{
		printf("%c", arr[i]);
	}
}*/

/*int main()
{
	char arr1[20];
	char arr2[20] = "hello";
	strcpy(arr1, arr2); //strcpy 는 뒤의 문자열을 앞에 문자열에 복사해준다. 함수 이름 가능
	printf("%s", arr1);
}*/

/*int main()
{
	char arr1[20];
	char arr2[20];

	gets_s(arr2, 19);// 입력
	strcpy(arr1, arr2);// 복사
	printf("%s", arr1);//출력
}*/

/*int main()
{
	char arr1[20] = "hello";
	char arr2[20] = "world";
	strcat(arr1, arr2); //strcat 은 앞 문자열 뒤에 뒷 문자열을 연속해서 이어서 입력한다.
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
	strcat(arr3, arr2); // 뒤에 이어 준다.
	printf("%s", arr3);
}*/

int main()
{
	char arr1[10];
	char arr2[10];

	gets_s(arr1, 9);
	gets_s(arr2, 9);
	
	if (strcmp(arr1, arr2) == 0) //strcmp 는 사전적인 순서로 크기를 비교한다
		                         // cat, dog 이면 c가 사전적으로 더 앞에 있으므로 c값이 더 작다
		                         // 
	{
		printf("일치");
	}
	else
		printf("불일치");
}
