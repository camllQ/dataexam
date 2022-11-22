#pragma once

typedef char element[10];   //스택 원소(element) 자료형을 int 정의

typedef struct stackNode {
	element data;
	struct stackNode* link;
}stackNode;

stackNode* top;


int isStackEmpty(void);
void push(element item);
void pop(void);


