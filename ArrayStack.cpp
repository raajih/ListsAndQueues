#include "ArrayStack.h"

template<class ItemType> 
ArrayStack<ItemType>::ArrayStack() : count(0) {}

template<class ItemType>
bool ArrayStack<ItemType>::isEmpty() const
{
	return count == 0;
}

template<class ItemType>
bool ArrayStack<ItemType>::push(const ItemType& newEntry)
{
	if (count == MAX_STACK)
		return false;

	items[count] = newEntry;
	count++;
	return true;
}

template<class ItemType>
bool ArrayStack<ItemType>::pop()
{
	if (count == 0)
		return false;

	count--;
	return true;
}

template<class ItemType>
ItemType ArrayStack<ItemType>::peek() const throw(PrecondViolatedExcep)
{
	if (count == 0)
		throw(PrecondViolatedExcep("peek() called on an empty stack."));

	return items[count - 1];
}
