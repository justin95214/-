#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"



int Initialize(IntStack *s, int max) {
	s->ptr = 0;
	if ((s->stk = calloc(max, sizeof(int))) == NULL) {
		s->max = 0;
		return -1;
	}

	s->max = max;
	return 0;
}

int Push(IntStack *s, int x) {
	if (s->ptr >= s->max){
		return -1;//스택 꽉참
	}
	s->stk[s->ptr++] = x; //스택에 넣은 공간을 가리는 포인터가 이전 포인터에서 +1 되어 넣을 배열 값 = x
	return 0;
}

int Pop(IntStack *s, int *x) {
	//int* x인 이유는 꺼내고나서 꺼낸값을 가리켜야하기 때문에 int*형이다.
	if (s->ptr <= 0) {
		//스택개수가 0개이면 return -1
		return -1;
	}
}

int Peek(const IntStack *s, int *x) {
	if (s->ptr <= 0) {
		//스택개수가 0개이면 return -1
		return -1;
	}
		*x = s->stk[s->ptr - 1];
		return 0;
}

int Capcity(const IntStack *s) {
	return s->max;
}

int Size(const IntStack *s) {
	return s->ptr;
}

void Clear(IntStack *s){
	s->ptr = 0;
	}
