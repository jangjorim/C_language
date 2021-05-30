#include <stdio.h>
#define STACK_SIZE 5

typedef int element;
element stack[STACK_SIZE];

int top = -1;
void push(element num);
void pop();
void show_stack();

int main() {
	while (1) {
		int a;
		printf("1�� push 2�� pop 3�� ���� : ");
		scanf("%d", &a);
		printf("\n");
		if (a == 1) {
			printf("�ִ� ��: ");
			scanf("%d", &a);
			printf("\n");
			push(a);
		}
		else if (a == 2) {
			pop();
		}
		else if (a == 3) {
			show_stack();
		}
		else printf("�ٽ� �Է����ּ���!\n\n");
	}
}

void push(element num) {
	if (top >= STACK_SIZE - 1) {
		printf("Stack is Full!!\n\n");
	}
	else stack[++top] = num;
}

void pop() {
	if (top == -1) {
		printf("Stack is Empty!!\n\n");
	}
	else top--;
}

void show_stack() {
	
	for (int i = 0; i < top + 1; i++) {
		printf("        %d        \n", stack[top - i]);
	}
	printf("      Stack\n\n");
}