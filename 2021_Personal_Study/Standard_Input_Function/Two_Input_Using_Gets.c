#include <stdio.h>

int ArrayToInteger(char string[]) {			// 문자열을 정수로 바꾸는 함수 *핵심*
	int count = 0, num = 0;
	// 문자열이 끝날 때 까지 반복함
	while (string[count] != 0 && string[count] != '\n') {
		// 반복하면서 이전값에 * 10을 해주면서 자릿수를 맞춰준다.
		num = num * 10 + (string[count] - '0');
		count++;
	}
	return num;
}

void main() {
	int first_num, second_num;
	char first_string[16], second_string[16];
	
	printf("input first number : ");
	gets(first_string);
	printf("input second number : ");
	gets(second_string);

	first_num = ArrayToInteger(first_string);
	second_num = ArrayToInteger(second_string);

	printf("%d + %d = %d \n", first_num, second_num, first_num + second_num);
}