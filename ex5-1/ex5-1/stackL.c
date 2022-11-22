#include <stdio.h>
#include "stackL.h";

//스택이 공백 상태인지 확인하는 연산
int isStackEmpty(void) {
	if (top == NULL)
		return 1;
	else return 0;
}

//스택의 top 에 원소를 삽입하는 연산
void push(element item) {
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
	temp->data;
	for (int i = 0; i < 10; i++) {
		temp->data[i] = item[i];
	}
	temp->link = top;
	top = temp;
}

//스택의 top에서 원소를 삭제하는 연산
void pop(void) {
	element item;
	stackNode* temp = top;

	if (isStackEmpty()) {      //스택의 공백 리스트 경우
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