#include "ArrayQueue.h"

template<class ItemType>
ArrayQueue<ItemType>::ArrayQueue() : count(0) {} //Shortcut to initalize count to 0 in constructor.

template<class ItemType>
bool ArrayQueue<ItemType>::isEmpty() const
{
	return (count == 0);
}

template<class ItemType>
bool ArrayQueue<ItemType>::enqueue(const ItemType& newEntry)
{
	if (count == MAX_QUEUE)//TODO: off by one?
		return false;
	
	items[count] = newEntry;
	count++;
	return true;
}

template<class ItemType>
bool ArrayQueue<ItemType>::dequeue() 
{
	if (count == 0)
		return false;
	
	for (int i = 0; i < count; i++)
		items[i] = items[i + 1];
	count--;
	return true;
}

template<class ItemType>
ItemType ArrayQueue<ItemType>::peekFront() const throw(PrecondViolatedExcep)
{
	if (count == 0)
		throw(PrecondViolatedExcep("peekFront() called with no items in queue."));
	else
		return items[0];
}
