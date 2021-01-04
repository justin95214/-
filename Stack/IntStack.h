#ifndef INTSTACK
#define INTSTACK

typedef struct{
	int max;  // 최대 용량
	int ptr; //스택에 쌓여져 있는 데이터 개수
	int *stk;//스택으로 사용할 배열을 가리키는 포인터 = ptr -1 위치
}IntStack;

int Initialize(IntStack *s, int max);
int Push(IntStack *s, int x);
int Pop(IntStack *s, int *x);
int Peek(IntStack *s, int *x);
void Clear(IntStack *s);
int Capcity(const IntStack *s);
int Size(const IntStack *s);

#endif INTSTACK
