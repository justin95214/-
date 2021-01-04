#include <stdio.h>
#include "IntStack.h"
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)



int main(){

	IntStack s;
	if (Initialize(&s, 64) == -1) {
		puts("스택 생성 실패");
		return 1;
	}

	while (1)
	{
		int menu, x;
		printf("현재 데이터 : %d / %d\n", Size(&s), Capcity(&s));
		printf("(1)push (2)pop (3)peek (4)print (5)exit\n");
		scanf("%d", &menu);

		if (menu == 0)break;
		switch (menu)
		{
		case 1:
			printf("데이터 :");
			scanf("%d", &x);
			if (Push(&s, x) == -1)
				puts("push failed!!");
			break;

		case 2:
			if (Pop(&s, &x) == -1)
				puts("pop failed!!");
			else
				printf("pop data = %d \n", x);
			break;

		case 3:

			if (Peek(&s, &x) == -1)
				puts("peek failed!!");
			else
				printf("peek data = %d \n", x);
			break;


		case 4:

			break;

		}


	}

	return 0;
}
