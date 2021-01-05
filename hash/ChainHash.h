#pragma once
#ifndef __ChainHash
#define __ChainHash
#include "Member.h"

typedef struct 
{
	Member data;
	struct  __node *next;
}Node;

typedef struct {
	int size;
	Node **table;
}ChainHash;

int Initialize(ChainHash *h, int size);

Node *Search(const ChainHash *h, const Member *x);

int Add(ChainHash *h, const Member *x);

int Remove(ChainHash *h, const Member *x);

void Dump(const ChainHash *h);

//void Terminate(ChainHash *h);

#endif __ChainHash
