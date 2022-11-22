#include <stdio.h>
#include "stackL.h";

//������ ���� �������� Ȯ���ϴ� ����
int isStackEmpty(void) {
	if (top == NULL)
		return 1;
	else return 0;
}

//������ top �� ���Ҹ� �����ϴ� ����
void push(element item) {
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
	temp->data;
	for (int i = 0; i < 10; i++) {
		temp->data[i] = item[i];
	}
	temp->link = top;
	top = temp;
}

//������ top���� ���Ҹ� �����ϴ� ����
void pop(void) {
	element item;
	stackNode* temp = top;

	if (isStackEmpty()) {      //������ ���� ����Ʈ ���
		printf("\n\n Stack is empty \n");
		return 0;
	}
	else {
		printf("</%s>", top->data);
		top = temp->link;
		free(temp);
		return item;
	}
}