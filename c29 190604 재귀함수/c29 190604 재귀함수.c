#include <stdio.h>

/*int chk(id, pw);
int count = 0;

int main()
{
	int id, pw, result;

	while (1)
	{
		printf("id");
		scanf("%d", &id);
		printf("password");
		scanf("%d", &pw);

		result = chk(id, pw);

		if (result == 1)
			break;
	}
}
int chk(id, pw)
{
	static int key_id = 123, key_pw = 123;

	if (id == key_id && pw == key_pw)
	{
		printf("로그인 성공");
		return 1;
	}
	count++;
	if (count == 3)
	{
		printf("로그인 실패");
		return 1;
	}
	return 0;
}*/

int fibo(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return fibo(n - 1) + fibo(n - 2);
}
int main()
{
	printf("%d", fibo(5));
}