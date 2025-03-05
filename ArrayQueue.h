#pragma once
#include "QueueInterface.h"
#include "PrecondViolatedExcep.h"

template <class ItemType>
class ArrayQueue : public QueueInterface<ItemType>
{
private:
	static const int MAX_QUEUE = 50;
	ItemType items[MAX_QUEUE] = {};
	int count;
	int front;
	int back;

public:
	ArrayQueue();
	bool isEmpty() const;
	bool enqueue(const ItemType&);
	bool dequeue();
	ItemType peekFront() const throw(PrecondViolatedExcep);
};

#include "ArrayQueue.cpp"