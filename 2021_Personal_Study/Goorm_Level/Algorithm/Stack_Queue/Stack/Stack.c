
#include <stdio.h>
#include <stdlib.h>

typedef struct _stack {
	int stack[10];
	int topIndex;
	int bottomIndex;
} Stack;

void SInit(Stack* pstack) {			// 초기에 스택을 초기화 하는 함수;
	pstack->topIndex = -1;
	pstack->bottomIndex = 0;
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

	//몇 번 입력을 받을 것인지

	scanf_s("%d ", &Data);

	for (i = 0; (i + time) < count * 2; i++) {

		scanf_s("%d ", &Data);
		if (Data == 1 || Data == 0) {

			if (Data == 1) {
				IntData[i] = Data;
			}
			else {
				scanf_s("%d ", &Data);
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