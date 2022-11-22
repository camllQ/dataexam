#include <stdio.h>
#include <string.h>
#include "stackL.h"
void main() {
	 element a;
	int i = 0;
	int ii = 0;
	char html[] = "<body><div><img src = \"hanbit_Academy.jpg\"/>\n<div><a href = \"https://www.hanbit.co.kr/academy/\">한빛아카데미\n";
	while (html[i] != '\0') {
		if (html[i] == '<') {
			printf("<");
			i++;
			ii = 0;
			while (html[i] != ' ' && html[i] != '>')
			{
				printf("%c", html[i]);
				a[ii] = html[i];
				ii++;
				i++;
			}
			printf("%c", html[i]);
			a[ii] = '\0';
			if (strcmp(a, "body") == 0 || strcmp(a, "div") == 0 || strcmp(a, "a") == 0) {
				push(a);
			}
		}
		else if(html[i] == '\n') {
			pop();
		}
		else {
			printf("%c", html[i]);
		}
		i++;
	}
	while (top != NULL)
	{
		pop();
	}
}

//int main(void) {
//	element item;
//	top = NULL;
//	printf("\n** 연결 스택 연산 **\n");
//	printStack();
//
//	push(1);  printStack();           //A,B,C 삽입하여 바꾸는거
//	push(2);  printStack();
//	push(3);  printStack();
//
//	item = peek(); printStack();      //%c로 변경(현재 top의 원소 출력)
//	printf("peek => %d", item);
//
//	item = pop(); printStack();       //삭제
//	printf("\t pop => %d", item);
//
//	item = pop(); printStack();
//	printf("\t pop => %d", item);
//
//	item = pop(); printStack();
//	printf("\t pop => %d", item);
//
//	getchar(); return 0;
//}