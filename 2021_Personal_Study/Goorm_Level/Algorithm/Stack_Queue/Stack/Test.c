/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _stack {
	int stack[10];
	int topIndex;
	int bottomIndex;
} Stack;

void SInit(Stack* pstack) {			// �ʱ⿡ ������ �ʱ�ȭ �ϴ� �Լ�;
	pstack->topIndex = -1;
	pstack->bottomIndex = 0;
}

int ArrayToInteger(char string[]) {			// ���ڿ� Ȥ�� ���ڷ� ���� �Է� �Լ��� ������ �ٲٴ� �Լ�
	int count = 0, num = 0;

	while (string[count] != 0 && string[count] != "\n") {
		num = num * 10 + (string[count] - '0');
		count++;
	}
	return num;
}

void SPush(Stack* pstack, int Data) {
	if ((pstack->topIndex += 1) != 10)
		pstack->stack[pstack->topIndex] = Data;
	else
		printf("overflow\n");
}

int SIsEmpty(Stack* pstack) {
	if ((pstack->bottomIndex - 1) != pstack->topIndex)
		return 1;
	else
		return 0;
}

int SPop(Stack* pstack) {
	if (SIsEmpty(pstack))
		return pstack->stack[pstack->bottomIndex++];
	else
		printf("underflow\n");
}


int main() {
	Stack stack;

	SInit(&stack);

	int count, i, Data, IntData[10], time = 0;
	char Input[4];

	//�� �� �Է��� ���� ������

	scanf_s(" %d ", &count);

	for (i = 0; (i + time) < count * 2; i++) {

		Data = ArrayToInteger(gets(Input));
		if (Data == 1 || Data == 0) {

			if (Data == 1) {
				IntData[i] = Data;
			}
			else {
				Data = ArrayToInteger(gets(Input));
				IntData[i] = Data;
			}
			time++;
			continue;
		}
		else
			break;

	}

	for (i = 0; i < time; i++) {
		Data = IntData[i];
		if (Data == 1) {
			SPop(&stack);
		}
		else {
			SPush(&stack, Data);
		}
	}

	while (SIsEmpty(&stack))
		printf("%d ", SPop(&stack));

	return 0;
}
*/