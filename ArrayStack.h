#pragma once
#include "StackInterface.h"
#include "PrecondViolatedExcep.h"

template <class ItemType>
class ArrayStack : StackInterface<ItemType>
{
private:
	static const int MAX_STACK = 50;
	int items[MAX_STACK];
	int count;

public:
	ArrayStack();
	bool isEmpty() const;
	bool push(const ItemType&);
	bool pop();
	ItemType peek() const;
};

#include "ArrayStack.cpp"
