#include <stdio.h>
#include <stdlib.h>

typedef struct _stack {
	int stack[10];
	int topIndex;
} Stack;

int ArrayToInteger(char string[]) {			// ���ڿ� Ȥ�� ���ڷ� ���� �Է� �Լ��� ������ �ٲٴ� �Լ�
	int count = 0, num = 0;

	while (string[count] != 0 && string[count] != "\n") {
		num = num * 10 + (string[count] - '0');
		count++;
	}
	return num;
}

void SInit(Stack* pstack) {			// �ʱ⿡ ������ �ʱ�ȭ �ϴ� �Լ�;
	pstack->topIndex = -1;
}

int SIsEmpty(Stack* pstack) {
	if (pstack->topIndex == -1)
		return 1;
	else
		return 0;
}

void SPush(Stack* pstack, int Data) {
	if ((pstack->topIndex += 1) != 10)
		pstack->stack[pstack->topIndex] = Data;
	else
		printf("Stack overflow");
}


int main() {
	Stack stack;

	int count, NUM, Data, i = 1;
	char InputData[4], N;
	
	//�� �� �Է��� ���� ������
	count = ArrayToInteger(gets(InputData));
	
	while (count != 0) {
		NUM = ArrayToInteger(gets(InputData));
		Data = ArrayToInteger(gets(InputData));
		if (NUM == 0) {
			SPush(&stack, Data);
		}
		else if (NUM == 1) {

		}
		else
			exit(-1);
	}
	
		

	


	




}
