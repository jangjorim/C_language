#include <stdio.h>
#include <stdlib.h>

typedef struct _stack {
	int stack[10];
	int topIndex;
} Stack;

int ArrayToInteger(char string[]) {			// 문자열 혹은 문자로 들어온 입력 함수를 정수로 바꾸는 함수
	int count = 0, num = 0;

	while (string[count] != 0 && string[count] != "\n") {
		num = num * 10 + (string[count] - '0');
		count++;
	}
	return num;
}




int main() {
	Stack stack;

	int count, NUM, Data, i = 1;
	char InputData[4], N;

	//몇 번 입력을 받을 것인지
	count = ArrayToInteger(gets(InputData));

	while (count != 0) {
		NUM = ArrayToInteger(gets(InputData));
		printf("%d", NUM);
		Data = ArrayToInteger(gets(InputData));
		printf("%d", Data);
		
	}
}
