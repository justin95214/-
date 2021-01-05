#include <stdio.h>
#include "Member.h"
#include "ChainHash.h"
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
typedef enum {
	TERMINATE, ADD, DELETE, SEARCH, DUMP
}Menu;

Menu SelectMenu(void) {
	int ch;
	do
	{
		printf("(1)ADD (2)DELTE (3)SEARCH (4)DUMP (5)EXIT");
		scanf("%d", &ch);

	} while (ch<TERMINATE || ch > DUMP);
	return (Menu)ch;
}

int main() {

	Menu menu;
	ChainHash hash;
	Initialize(&hash, 13);
	do
	{
		
		int result;
		Member x;
		Node *temp;
		switch (menu = SelectMenu())
		{
		case ADD:
			x = ScanMember("add", MEMBER_NO | MEMBER_NAME);
			result = Add(&hash, &x);
			if (result)
				printf("\aERROR: ADD is failed (%s)\n", (result == 1) ? "already enrolled" : "memory lacked");
			break;

		case DELETE:
			x = ScanMember("delete", MEMBER_NO);
			temp = Remove(&hash, &x);
			if (result ==1 )
				printf("\aERROR: Data is not existed\n");
			break;

		case SEARCH:
			x = ScanMember("search", MEMBER_NO);
			temp = Search(&hash, &x);
			if (temp == NULL)
				printf("\a search is failed\n");
			else {
				printf("search is success");
				PrintLnMember(&temp->data);
			}
			break;


		case DUMP:
			Dump(&hash);
			break;
		}

	} while (menu != TERMINATE);
	return 0;
}
